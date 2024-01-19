/********************************************************************************
** Form generated from reading UI file 'creditos.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOS_H
#define UI_CREDITOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Creditos
{
public:
    QLabel *lblGitLuis;

    void setupUi(QWidget *Creditos)
    {
        if (Creditos->objectName().isEmpty())
            Creditos->setObjectName("Creditos");
        Creditos->resize(365, 220);
        lblGitLuis = new QLabel(Creditos);
        lblGitLuis->setObjectName("lblGitLuis");
        lblGitLuis->setGeometry(QRect(70, 60, 61, 31));

        retranslateUi(Creditos);

        QMetaObject::connectSlotsByName(Creditos);
    } // setupUi

    void retranslateUi(QWidget *Creditos)
    {
        Creditos->setWindowTitle(QCoreApplication::translate("Creditos", "Creditos", nullptr));
        lblGitLuis->setText(QCoreApplication::translate("Creditos", "Luis Pillajo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Creditos: public Ui_Creditos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOS_H
