#include "preguntaform.h"
#include "ui_preguntaform.h"

PreguntaForm::PreguntaForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PreguntaForm),
    m_cuestionario(nullptr)
{
    ui->setupUi(this);
}

PreguntaForm::~PreguntaForm()
{
    delete ui;
}

void PreguntaForm::setCuestionario(Cuestionario *newCuestionario)
{
    m_cuestionario = newCuestionario;
    cargarDatos();
}

void PreguntaForm::cargarDatos()
{
    ui->lblTema->setText(m_cuestionario->nombreTema());
    ui->cmbTerminos->addItems(m_cuestionario->terminos());
    mostrarConceptos();
}
void PreguntaForm::mostrarConceptos()
{
    if(m_cuestionario->hayMasPreguntas())
    {
        m_pregunta = m_cuestionario->siguiente();
        ui->txtConceptos->setText(m_pregunta->apunte()->concepto());
        ui->txtConceptos->setReadOnly(true);
        int actual = m_cuestionario->mostradas();
        int total = m_cuestionario->totalPreguntas();
        ui->lblContador->setText(QString::number(actual) + " / " + QString::number(total));
    }
    else
    {
        ui->txtConceptos->clear();
        ui->txtConceptos->setText("* Fin de las preguntas *");
    }
}

void PreguntaForm::on_buttonBox_accepted()
{
    QString respuesta = ui->cmbTerminos->currentText();
    if (!respuesta.isEmpty()) {
        m_pregunta->responder(respuesta);
        mostrarConceptos();
    }
}


void PreguntaForm::setAsignaturaVer(const QString &asignatura)
{
    ui->lblTema->setText(asignatura);
}

void PreguntaForm::setTemaVer(const QString &tema)
{
    ui->lblTema->setText(tema);

}

void PreguntaForm::on_buttonBox_rejected()
{
    //qDebug() << "Antes de emitir la señal preguntasContestadas.";
        emit preguntasContestadas(m_cuestionario);

    this->parentWidget()->close();
    //qDebug() << "Señal preguntasContestadas emitida.";
}





