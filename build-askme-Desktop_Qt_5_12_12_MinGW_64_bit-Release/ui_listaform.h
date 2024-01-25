/********************************************************************************
** Form generated from reading UI file 'listaform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTAFORM_H
#define UI_LISTAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_listaForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTableWidget *tblTemas;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QTableWidget *tblTerminos;
    QLabel *label;
    QComboBox *cmbAsignaturas;

    void setupUi(QWidget *listaForm)
    {
        if (listaForm->objectName().isEmpty())
            listaForm->setObjectName(QString::fromUtf8("listaForm"));
        listaForm->resize(424, 330);
        gridLayout = new QGridLayout(listaForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(listaForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Small"));
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        tblTemas = new QTableWidget(listaForm);
        tblTemas->setObjectName(QString::fromUtf8("tblTemas"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe Print"));
        tblTemas->setFont(font1);

        verticalLayout_2->addWidget(tblTemas);


        gridLayout->addLayout(verticalLayout_2, 1, 0, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(listaForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        tblTerminos = new QTableWidget(listaForm);
        tblTerminos->setObjectName(QString::fromUtf8("tblTerminos"));
        tblTerminos->setFont(font1);

        verticalLayout->addWidget(tblTerminos);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 3);

        label = new QLabel(listaForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        cmbAsignaturas = new QComboBox(listaForm);
        cmbAsignaturas->setObjectName(QString::fromUtf8("cmbAsignaturas"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Artifakt Element"));
        font2.setBold(true);
        font2.setWeight(75);
        cmbAsignaturas->setFont(font2);

        gridLayout->addWidget(cmbAsignaturas, 0, 1, 1, 2);


        retranslateUi(listaForm);

        QMetaObject::connectSlotsByName(listaForm);
    } // setupUi

    void retranslateUi(QWidget *listaForm)
    {
        listaForm->setWindowTitle(QApplication::translate("listaForm", "Lista", nullptr));
        label_2->setText(QApplication::translate("listaForm", "Temas", nullptr));
        label_3->setText(QApplication::translate("listaForm", "Terminos y concepto", nullptr));
        label->setText(QApplication::translate("listaForm", "Asignatura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class listaForm: public Ui_listaForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTAFORM_H
