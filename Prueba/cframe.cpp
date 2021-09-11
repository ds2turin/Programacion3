#include "cframe.h"
#include "ui_cframe.h"

cframe::cframe(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::cframe)
{
    ui->setupUi(this);
}

cframe::~cframe()
{
    delete ui;
}


void cframe::on_pushButton_clicked()
{
    ui->label->setText("Feliz día del Ñiño!!!");
}

