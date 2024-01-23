/********************************************************************************
** Form generated from reading UI file 'askme.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKME_H
#define UI_ASKME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Askme
{
public:
    QAction *actionNuevo;
    QAction *actionLista;
    QAction *actionGenerar;
    QAction *actionSalir;
    QAction *actionCreditos;
    QAction *actionGuardar;
    QAction *actionCargar;
    QAction *actionListas;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QMdiArea *mdiArea;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuApuntes;
    QMenu *menuPreguntas;
    QMenu *menuAcerca_de;

    void setupUi(QMainWindow *Askme)
    {
        if (Askme->objectName().isEmpty())
            Askme->setObjectName(QString::fromUtf8("Askme"));
        Askme->resize(800, 600);
        actionNuevo = new QAction(Askme);
        actionNuevo->setObjectName(QString::fromUtf8("actionNuevo"));
        actionLista = new QAction(Askme);
        actionLista->setObjectName(QString::fromUtf8("actionLista"));
        actionGenerar = new QAction(Askme);
        actionGenerar->setObjectName(QString::fromUtf8("actionGenerar"));
        actionSalir = new QAction(Askme);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionCreditos = new QAction(Askme);
        actionCreditos->setObjectName(QString::fromUtf8("actionCreditos"));
        actionGuardar = new QAction(Askme);
        actionGuardar->setObjectName(QString::fromUtf8("actionGuardar"));
        actionCargar = new QAction(Askme);
        actionCargar->setObjectName(QString::fromUtf8("actionCargar"));
        actionListas = new QAction(Askme);
        actionListas->setObjectName(QString::fromUtf8("actionListas"));
        centralwidget = new QWidget(Askme);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        mdiArea = new QMdiArea(centralwidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));

        gridLayout->addWidget(mdiArea, 0, 0, 1, 1);

        Askme->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Askme);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Askme->setStatusBar(statusbar);
        menubar = new QMenuBar(Askme);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuApuntes = new QMenu(menuArchivo);
        menuApuntes->setObjectName(QString::fromUtf8("menuApuntes"));
        menuPreguntas = new QMenu(menuArchivo);
        menuPreguntas->setObjectName(QString::fromUtf8("menuPreguntas"));
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        Askme->setMenuBar(menubar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(menuApuntes->menuAction());
        menuArchivo->addAction(menuPreguntas->menuAction());
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionSalir);
        menuApuntes->addAction(actionNuevo);
        menuApuntes->addAction(actionLista);
        menuPreguntas->addAction(actionGenerar);
        menuPreguntas->addSeparator();
        menuAcerca_de->addAction(actionCreditos);

        retranslateUi(Askme);

        QMetaObject::connectSlotsByName(Askme);
    } // setupUi

    void retranslateUi(QMainWindow *Askme)
    {
        Askme->setWindowTitle(QCoreApplication::translate("Askme", "Askme", nullptr));
        actionNuevo->setText(QCoreApplication::translate("Askme", "&Nuevo", nullptr));
#if QT_CONFIG(tooltip)
        actionNuevo->setToolTip(QCoreApplication::translate("Askme", "Crear un nuevo apunte", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionNuevo->setShortcut(QCoreApplication::translate("Askme", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLista->setText(QCoreApplication::translate("Askme", "&Lista", nullptr));
#if QT_CONFIG(tooltip)
        actionLista->setToolTip(QCoreApplication::translate("Askme", "Lista de apuntes", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionLista->setShortcut(QCoreApplication::translate("Askme", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerar->setText(QCoreApplication::translate("Askme", "&Generar", nullptr));
#if QT_CONFIG(tooltip)
        actionGenerar->setToolTip(QCoreApplication::translate("Askme", "Generar nuevas preguntas", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionGenerar->setShortcut(QCoreApplication::translate("Askme", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSalir->setText(QCoreApplication::translate("Askme", "&Salir", nullptr));
#if QT_CONFIG(shortcut)
        actionSalir->setShortcut(QCoreApplication::translate("Askme", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCreditos->setText(QCoreApplication::translate("Askme", "&Creditos", nullptr));
#if QT_CONFIG(tooltip)
        actionCreditos->setToolTip(QCoreApplication::translate("Askme", "Autores de la aplicacion", nullptr));
#endif // QT_CONFIG(tooltip)
        actionGuardar->setText(QCoreApplication::translate("Askme", "Guardar", nullptr));
        actionCargar->setText(QCoreApplication::translate("Askme", "Cargar", nullptr));
        actionListas->setText(QCoreApplication::translate("Askme", "Listas", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("Askme", "&Archivo", nullptr));
        menuApuntes->setTitle(QCoreApplication::translate("Askme", "&Apuntes", nullptr));
        menuPreguntas->setTitle(QCoreApplication::translate("Askme", "&Preguntas", nullptr));
        menuAcerca_de->setTitle(QCoreApplication::translate("Askme", "A&cerca de", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Askme: public Ui_Askme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKME_H
