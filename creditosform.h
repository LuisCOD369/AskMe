#ifndef CREDITOSFORM_H
#define CREDITOSFORM_H

#include <QWidget>
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class CreditosForm;
}

class CreditosForm : public QWidget
{
    Q_OBJECT

public:
    explicit CreditosForm(QWidget *parent = nullptr);
    ~CreditosForm();

signals:
    void abrirLuis();
    void abrirFabia();
    void abrirAriel();
    void abrirIng();
    void abrirMateo();
    void abrirDavid();
    void abrirJoseph();
    void abrirMayerli();


private slots:
    void on_pushButtonLuis_released();
    void on_pushButtonFabia_released();
    void on_pushButtonAriel_released();

    void on_pushButton_5_released();

    void on_pushButton_2_released();

    void on_pushButton_released();

    void on_pushButton_4_released();

    void on_pushButton_3_released();

private:
    Ui::CreditosForm *ui;
    void abrirEnlace(const QString &url);
};

#endif // CREDITOSFORM_H
