#include "creditos.h"
#include "ui_creditos.h"
#include "menu.h"
Creditos::Creditos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Creditos)
{
    ui->setupUi(this);
}

Creditos::~Creditos()
{
    delete ui;
}

void Creditos::on_pushButton_clicked()
{
    Menu *obj;
    obj = new Menu();
    obj->show();
    this->close();
}
