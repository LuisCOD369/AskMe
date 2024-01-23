#include "resultadosform.h"
#include "ui_resultadosform.h"

ResultadosForm::ResultadosForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ResultadosForm)
{
    ui->setupUi(this);
}

ResultadosForm::~ResultadosForm()
{
    delete ui;
}

void ResultadosForm::setDatos(Cuestionario *cuestionario)
{
    if (cuestionario)
    {
        m_cuestionario = cuestionario;
        cargarDatos();
    }
    else
    {

    }
}

void ResultadosForm::cargarDatos()
{
    float score = m_cuestionario->score();
    QString tema = m_cuestionario->nombreTema();
    ui->lblTema->setText(tema);
    // Mostrar la asignatura
    QString asignatura = m_cuestionario->asignatura();
    ui->lblAsignatura->setText(asignatura);

    QString porcentaje = QString::number(score, 'f', 2) + "%";
    if (score < 30)
    {
        ui->lblScore->setStyleSheet("QLabel { color : red; }");
    }
    else if (score < 70)
    {
        ui->lblScore->setStyleSheet("QLabel { color : yellow; }");
    }
    else
    {
        ui->lblScore->setStyleSheet("QLabel { color : green; }");
    }
    ui->lblScore->setText("Score: " + porcentaje);
    ui->lblTema->setText(tema);

    QList<Pregunta *> preguntas = m_cuestionario->preguntas();

    ui->tblResultados->setRowCount(preguntas.size());
    ui->tblResultados->setColumnCount(2);

    ui->tblResultados->setHorizontalHeaderLabels({"Término", "V/F"});
    ui->tblResultados->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color: cyan }");



        // Llenar la tabla con los datos de las preguntas
        for (int i = 0; i < preguntas.size(); ++i)
    {
        QTableWidgetItem *terminoItem = new QTableWidgetItem(preguntas[i]->apunte()->termino());
        QTableWidgetItem *correctoItem = new QTableWidgetItem(preguntas[i]->correcta() ? "Correcto" : "Incorrecto");
        terminoItem->setBackground(Qt::cyan);

        if (preguntas[i]->correcta())
        {
            correctoItem->setBackground(Qt::green);
        }
        else
        {
            correctoItem->setBackground(Qt::red);
        }
        ui->tblResultados->setItem(i, 0, terminoItem);
        ui->tblResultados->setItem(i, 1, correctoItem);
    }
}
void ResultadosForm::on_btnCerrar_released()
{
    this->parentWidget()->close();
}
