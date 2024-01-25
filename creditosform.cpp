#include "creditosform.h"
#include "ui_creditosform.h"

CreditosForm::CreditosForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreditosForm)

{



    ui->setupUi(this);
    //layout()->setSizeConstraint(QLayout::SetFixedSize);

//    QString imagePath = ":/home/alumno1/QT proyect/AskMe-main/recursos/UPS.png";

//    // Cargar la imagen en un QPixmap
//    QPixmap image(imagePath);

//    // Escalar la imagen si es necesario
//    image = image.scaled(ui->labelImagen->size(), Qt::KeepAspectRatio);

//    // Mostrar la imagen en el QLabel
//    ui->labelImagen->setPixmap(image);





    connect(this, &CreditosForm::abrirLuis, this, [this]() {
        abrirEnlace("https://github.com/LuisCOD369");
    });

    connect(this, &CreditosForm::abrirFabia, this, [this]() {
        abrirEnlace("https://github.com/FLiamTech");
    });

    connect(this, &CreditosForm::abrirAriel, this, [this]() {
        abrirEnlace("https://github.com/ArielFLores5");
    });

    connect(this, &CreditosForm::abrirIng, this, [this]() {
        abrirEnlace("https://github.com/rtufino");
    });
    connect(this, &CreditosForm::abrirJoseph, this, [this]() {
        abrirEnlace("https://github.com/Hayai01");
    });
    connect(this, &CreditosForm::abrirMayerli, this, [this]() {
        abrirEnlace("https://github.com/Mayerli12");
    });
    connect(this, &CreditosForm::abrirMateo, this, [this]() {
        abrirEnlace("https://github.com/EonSoulCout");
    });
    connect(this, &CreditosForm::abrirDavid, this, [this]() {
        abrirEnlace("https://github.com/defaultdavr21");
    });
}

CreditosForm::~CreditosForm()
{
    delete ui;
}

void CreditosForm::on_pushButtonLuis_released()
{
    emit abrirLuis();
}

void CreditosForm::on_pushButtonFabia_released()
{
    emit abrirFabia();
}

void CreditosForm::on_pushButtonAriel_released()
{
    emit abrirAriel();
}

void CreditosForm::abrirEnlace(const QString &url)
{
    QDesktopServices::openUrl(QUrl(url));
}


void CreditosForm::on_pushButton_5_released()
{
    emit abrirIng();
}


void CreditosForm::on_pushButton_2_released()
{
    emit abrirJoseph();
}


void CreditosForm::on_pushButton_released()
{
    emit abrirMayerli();
}


void CreditosForm::on_pushButton_4_released()
{
    emit abrirMateo();
}


void CreditosForm::on_pushButton_3_released()
{
    emit abrirDavid();
}

