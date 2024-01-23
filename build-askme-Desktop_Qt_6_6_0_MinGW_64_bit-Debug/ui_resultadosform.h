/********************************************************************************
** Form generated from reading UI file 'resultadosform.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
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
    QLabel *lblScore;
    QLabel *label_3;
    QLabel *lblTema;
    QLabel *label;
    QPushButton *btnCerrar;
    QLabel *lblAsignatura;
    QTableWidget *tblResultados;

    void setupUi(QWidget *ResultadosForm)
    {
        if (ResultadosForm->objectName().isEmpty())
            ResultadosForm->setObjectName("ResultadosForm");
        ResultadosForm->resize(415, 272);
        ResultadosForm->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(ResultadosForm);
        gridLayout->setObjectName("gridLayout");
        lblScore = new QLabel(ResultadosForm);
        lblScore->setObjectName("lblScore");
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro")});
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        lblScore->setFont(font);

        gridLayout->addWidget(lblScore, 4, 0, 1, 1);

        label_3 = new QLabel(ResultadosForm);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 1, 1, 1);

        lblTema = new QLabel(ResultadosForm);
        lblTema->setObjectName("lblTema");

        gridLayout->addWidget(lblTema, 2, 2, 1, 1);

        label = new QLabel(ResultadosForm);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);

        btnCerrar = new QPushButton(ResultadosForm);
        btnCerrar->setObjectName("btnCerrar");

        gridLayout->addWidget(btnCerrar, 4, 4, 1, 1);

        lblAsignatura = new QLabel(ResultadosForm);
        lblAsignatura->setObjectName("lblAsignatura");

        gridLayout->addWidget(lblAsignatura, 0, 2, 1, 1);

        tblResultados = new QTableWidget(ResultadosForm);
        tblResultados->setObjectName("tblResultados");

        gridLayout->addWidget(tblResultados, 3, 0, 1, 5);


        retranslateUi(ResultadosForm);

        QMetaObject::connectSlotsByName(ResultadosForm);
    } // setupUi

    void retranslateUi(QWidget *ResultadosForm)
    {
        ResultadosForm->setWindowTitle(QCoreApplication::translate("ResultadosForm", "Resultados", nullptr));
        lblScore->setText(QString());
        label_3->setText(QCoreApplication::translate("ResultadosForm", "Tema:", nullptr));
        lblTema->setText(QString());
        label->setText(QCoreApplication::translate("ResultadosForm", "Asignatura:", nullptr));
        btnCerrar->setText(QCoreApplication::translate("ResultadosForm", "Cerrar", nullptr));
        lblAsignatura->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResultadosForm: public Ui_ResultadosForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADOSFORM_H
