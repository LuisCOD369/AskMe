#include "askme.h"
#include "ui_askme.h"

Askme::Askme(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Askme)
{
    ui->setupUi(this);

    cargar();
    guardar();
    connect(ui->actionCargar, SIGNAL(released()), this, SLOT(on_actionCargar_triggered()));
}
Askme::~Askme()
{
    delete ui;
}

void Askme::on_apunteTomado(Apunte *apunte)
{
    foreach(Asignatura *a, m_asignaturas)
    {
        qDebug().noquote() << a->toString();
    }
    guardar();
    cargar();
    if (ui->mdiArea->currentSubWindow())
    {
        listaForm *listaVentana = qobject_cast<listaForm *>(ui->mdiArea->currentSubWindow()->widget());
        if (listaVentana)
        {
            listaVentana->cargarAsignaturas();
        }
    }
}


void Askme::cargarSubVentana(QWidget *ventana)
{
    auto sub = ui->mdiArea->addSubWindow(ventana);
    sub->show();
}

void Askme::cargar()
{
    QFile file("apuntes.csv");
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream entrada(&file);
        entrada.readLine();
        while(!entrada.atEnd())
        {
            QString linea = entrada.readLine();
            QStringList datos = linea.split("\t");
            if(datos.size() >= 4)
            {
                QString nombreAsignatura = datos[0].trimmed();
                QString nombreTema = datos[1].trimmed();
                QString termino = datos[2].trimmed();
                QString concepto = datos[3].trimmed();
                Asignatura *asignatura = nullptr;
                Tema *tema = nullptr;


                foreach(Asignatura *a, m_asignaturas)
                {
                    if(a->nombre() == nombreAsignatura)
                    {
                        asignatura = a;
                        foreach(Tema *t, a->temas())
                        {
                            if(t->nombre() == nombreTema)
                            {
                                tema = t;
                                break;
                            }
                        }
                        break;
                    }
                }
                if (!asignatura)
                {
                    asignatura = new Asignatura(nombreAsignatura);
                    m_asignaturas.append(asignatura);
                }
                if (!tema)
                {
                    tema = new Tema(nombreTema);
                    asignatura->agregarTema(tema);
                }
                Apunte *apunte = new Apunte(termino, concepto);
                tema->agregarApunte(apunte);
            }
        }
        file.close();
    }
    else
    {
        QMessageBox::critical(this, "Cargar datos", "No se pudieron cargar los datos");
    }
}


void Askme::on_actionNuevo_triggered()
{
    ApunteForm *w = new ApunteForm(this);
    w->setAsignaturas(m_asignaturas);
    w->cargarAsignaturas();
    connect(w, SIGNAL(nuevaAsignaturaCreada(Asignatura*)), this, SLOT(on_nuevaAsignaturaCreada(Asignatura*)));
    connect(w, SIGNAL(apunteTomado(Apunte*)), this, SLOT(on_apunteTomado(Apunte*)));
    cargarSubVentana(w);
}

void Askme::on_actionLista_triggered()
{
    listaForm *w = new listaForm(this);

    w->setAsignaturas(&m_asignaturas);

    w->cargarAsignaturas();

    cargarSubVentana(w);
    w->show();
}
