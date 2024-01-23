/********************************************************************************
** Form generated from reading UI file 'creditosform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREDITOSFORM_H
#define UI_CREDITOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreditosForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QLabel *label_4;
    QPushButton *pushButtonLuis;
    QLabel *label_5;
    QPushButton *pushButtonFabia;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QPushButton *pushButton_4;
    QLabel *label_10;
    QPushButton *pushButtonAriel;

    void setupUi(QWidget *CreditosForm)
    {
        if (CreditosForm->objectName().isEmpty())
            CreditosForm->setObjectName(QString::fromUtf8("CreditosForm"));
        CreditosForm->resize(398, 331);
        CreditosForm->setStyleSheet(QString::fromUtf8("alternate-background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));"));
        gridLayout = new QGridLayout(CreditosForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CreditosForm);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(CreditosForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setItalic(true);
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(CreditosForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font2;
        font2.setBold(true);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(CreditosForm);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        label_4 = new QLabel(CreditosForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        pushButtonLuis = new QPushButton(CreditosForm);
        pushButtonLuis->setObjectName(QString::fromUtf8("pushButtonLuis"));

        gridLayout->addWidget(pushButtonLuis, 2, 1, 1, 1);

        label_5 = new QLabel(CreditosForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        pushButtonFabia = new QPushButton(CreditosForm);
        pushButtonFabia->setObjectName(QString::fromUtf8("pushButtonFabia"));

        gridLayout->addWidget(pushButtonFabia, 3, 1, 1, 1);

        label_6 = new QLabel(CreditosForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        pushButton = new QPushButton(CreditosForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 1, 1, 1);

        label_7 = new QLabel(CreditosForm);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 1);

        pushButton_2 = new QPushButton(CreditosForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 5, 1, 1, 1);

        label_8 = new QLabel(CreditosForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        pushButton_3 = new QPushButton(CreditosForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 6, 1, 1, 1);

        label_9 = new QLabel(CreditosForm);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 7, 0, 1, 1);

        pushButton_4 = new QPushButton(CreditosForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 7, 1, 1, 1);

        label_10 = new QLabel(CreditosForm);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 8, 0, 1, 1);

        pushButtonAriel = new QPushButton(CreditosForm);
        pushButtonAriel->setObjectName(QString::fromUtf8("pushButtonAriel"));

        gridLayout->addWidget(pushButtonAriel, 8, 1, 1, 1);


        retranslateUi(CreditosForm);

        QMetaObject::connectSlotsByName(CreditosForm);
    } // setupUi

    void retranslateUi(QWidget *CreditosForm)
    {
        CreditosForm->setWindowTitle(QCoreApplication::translate("CreditosForm", "Creditos", nullptr));
        label->setText(QCoreApplication::translate("CreditosForm", "Nombres:", nullptr));
        label_2->setText(QCoreApplication::translate("CreditosForm", "GitHub", nullptr));
        label_3->setText(QCoreApplication::translate("CreditosForm", "Ing. Rodrigo Tufi\303\261o", nullptr));
        pushButton_5->setText(QCoreApplication::translate("CreditosForm", "rtufino", nullptr));
        label_4->setText(QCoreApplication::translate("CreditosForm", "Est. Pillajo Luis", nullptr));
        pushButtonLuis->setText(QCoreApplication::translate("CreditosForm", "LuisCOD369", nullptr));
        label_5->setText(QCoreApplication::translate("CreditosForm", "Est. Izquierdo Fabian", nullptr));
        pushButtonFabia->setText(QCoreApplication::translate("CreditosForm", "FLiamTech", nullptr));
        label_6->setText(QCoreApplication::translate("CreditosForm", "Est. Campuez Mayerli", nullptr));
        pushButton->setText(QCoreApplication::translate("CreditosForm", "Mayerli12", nullptr));
        label_7->setText(QCoreApplication::translate("CreditosForm", "Est. Uyana Joseph", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CreditosForm", "Hayai01", nullptr));
        label_8->setText(QCoreApplication::translate("CreditosForm", "Est. Ramos David", nullptr));
        pushButton_3->setText(QCoreApplication::translate("CreditosForm", "defaultdavr21", nullptr));
        label_9->setText(QCoreApplication::translate("CreditosForm", "Est. Jim\303\251nez Mateo", nullptr));
        pushButton_4->setText(QCoreApplication::translate("CreditosForm", "EonSoulCout", nullptr));
        label_10->setText(QCoreApplication::translate("CreditosForm", "Est. Flores Ariel", nullptr));
        pushButtonAriel->setText(QCoreApplication::translate("CreditosForm", "ArielFLores5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreditosForm: public Ui_CreditosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREDITOSFORM_H
