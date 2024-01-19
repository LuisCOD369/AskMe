#include "creditos.h"
#include "ui_creditos.h"

Creditos::Creditos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Creditos)
{
    ui->setupUi(this);
}

Creditos::~Creditos()
{
    delete ui;
}
