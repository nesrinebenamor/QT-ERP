#include "consulter_cong.h"
#include "ui_consulter_cong.h"


consulter_cong::consulter_cong(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::consulter_cong)
{
    ui->setupUi(this);
    ui->consulterTB->setModel(cong.afficherconges());
}

consulter_cong::~consulter_cong()
{
    delete ui;
}

void consulter_cong::on_pushButton_clicked()
{
    this->close();
}
