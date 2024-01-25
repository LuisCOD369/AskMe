/********************************************************************************
** Form generated from reading UI file 'resultadosform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADOSFORM_H
#define UI_RESULTADOSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResultadosForm
{
public:
    QGridLayout *gridLayout;
    QLabel *lblAsignatura;
    QLabel *label_3;
    QPushButton *btnCerrar;
    QLabel *label;
    QLabel *lblTema;
    QTableWidget *tblResultados;
    QLabel *lblScore;

    void setupUi(QWidget *ResultadosForm)
    {
        if (ResultadosForm->objectName().isEmpty())
            ResultadosForm->setObjectName(QString::fromUtf8("ResultadosForm"));
        ResultadosForm->resize(272, 272);
        ResultadosForm->setMinimumSize(QSize(255, 0));
        ResultadosForm->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ResultadosForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lblAsignatura = new QLabel(ResultadosForm);
        lblAsignatura->setObjectName(QString::fromUtf8("lblAsignatura"));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        lblAsignatura->setFont(font);

        gridLayout->addWidget(lblAsignatura, 0, 2, 1, 1);

        label_3 = new QLabel(ResultadosForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        btnCerrar = new QPushButton(ResultadosForm);
        btnCerrar->setObjectName(QString::fromUtf8("btnCerrar"));

        gridLayout->addWidget(btnCerrar, 4, 4, 1, 1);

        label = new QLabel(ResultadosForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        lblTema = new QLabel(ResultadosForm);
        lblTema->setObjectName(QString::fromUtf8("lblTema"));
        lblTema->setFont(font);

        gridLayout->addWidget(lblTema, 2, 2, 1, 1);

        tblResultados = new QTableWidget(ResultadosForm);
        tblResultados->setObjectName(QString::fromUtf8("tblResultados"));
        tblResultados->setMaximumSize(QSize(254, 16777215));

        gridLayout->addWidget(tblResultados, 3, 0, 1, 5);

        lblScore = new QLabel(ResultadosForm);
        lblScore->setObjectName(QString::fromUtf8("lblScore"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Code Pro"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(true);
        lblScore->setFont(font1);
        lblScore->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(0, 0, 0);"));
        lblScore->setScaledContents(true);

        gridLayout->addWidget(lblScore, 4, 0, 1, 2);


        retranslateUi(ResultadosForm);

        QMetaObject::connectSlotsByName(ResultadosForm);
    } // setupUi

    void retranslateUi(QWidget *ResultadosForm)
    {
        ResultadosForm->setWindowTitle(QApplication::translate("ResultadosForm", "Resultados", nullptr));
        lblAsignatura->setText(QString());
        label_3->setText(QApplication::translate("ResultadosForm", "Tema:", nullptr));
        btnCerrar->setText(QApplication::translate("ResultadosForm", "Cerrar", nullptr));
        label->setText(QApplication::translate("ResultadosForm", "Asignatura:", nullptr));
        lblTema->setText(QString());
        lblScore->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResultadosForm: public Ui_ResultadosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOSFORM_H
