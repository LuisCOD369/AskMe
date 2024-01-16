/********************************************************************************
** Form generated from reading UI file 'askme.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASKME_H
#define UI_ASKME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Askme
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Askme)
    {
        if (Askme->objectName().isEmpty())
            Askme->setObjectName("Askme");
        Askme->resize(800, 600);
        centralwidget = new QWidget(Askme);
        centralwidget->setObjectName("centralwidget");
        Askme->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Askme);
        menubar->setObjectName("menubar");
        Askme->setMenuBar(menubar);
        statusbar = new QStatusBar(Askme);
        statusbar->setObjectName("statusbar");
        Askme->setStatusBar(statusbar);

        retranslateUi(Askme);

        QMetaObject::connectSlotsByName(Askme);
    } // setupUi

    void retranslateUi(QMainWindow *Askme)
    {
        Askme->setWindowTitle(QCoreApplication::translate("Askme", "Askme", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Askme: public Ui_Askme {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASKME_H
