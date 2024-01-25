/********************************************************************************
** Form generated from reading UI file 'askme.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
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
        Askme->setWindowTitle(QApplication::translate("Askme", "Askme", nullptr));
        actionNuevo->setText(QApplication::translate("Askme", "&Nuevo", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNuevo->setToolTip(QApplication::translate("Askme", "Crear un nuevo apunte", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNuevo->setShortcut(QApplication::translate("Askme", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionLista->setText(QApplication::translate("Askme", "&Lista", nullptr));
#ifndef QT_NO_TOOLTIP
        actionLista->setToolTip(QApplication::translate("Askme", "Lista de apuntes", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionLista->setShortcut(QApplication::translate("Askme", "Ctrl+L", nullptr));
#endif // QT_NO_SHORTCUT
        actionGenerar->setText(QApplication::translate("Askme", "&Generar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGenerar->setToolTip(QApplication::translate("Askme", "Generar nuevas preguntas", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGenerar->setShortcut(QApplication::translate("Askme", "Ctrl+G", nullptr));
#endif // QT_NO_SHORTCUT
        actionSalir->setText(QApplication::translate("Askme", "&Salir", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSalir->setShortcut(QApplication::translate("Askme", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionCreditos->setText(QApplication::translate("Askme", "&Creditos", nullptr));
#ifndef QT_NO_TOOLTIP
        actionCreditos->setToolTip(QApplication::translate("Askme", "Autores de la aplicacion", nullptr));
#endif // QT_NO_TOOLTIP
        actionGuardar->setText(QApplication::translate("Askme", "Guardar", nullptr));
        actionCargar->setText(QApplication::translate("Askme", "Cargar", nullptr));
        actionListas->setText(QApplication::translate("Askme", "Listas", nullptr));
        menuArchivo->setTitle(QApplication::translate("Askme", "&Archivo", nullptr));
        menuApuntes->setTitle(QApplication::translate("Askme", "&Apuntes", nullptr));
        menuPreguntas->setTitle(QApplication::translate("Askme", "&Preguntas", nullptr));
        menuAcerca_de->setTitle(QApplication::translate("Askme", "A&cerca de", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Askme: public Ui_Askme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKME_H
