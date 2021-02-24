#include "instroctions.h"
#include "ui_instroctions.h"
#include "menu.h"

Instroctions::Instroctions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Instroctions)
{
    ui->setupUi(this);
}

Instroctions::~Instroctions()
{
    delete ui;
}

void Instroctions::on_pushButton_clicked()
{
    Menu *obj;
    obj = new Menu();
    obj->show();
    this->close();
}
