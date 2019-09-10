#include "interface_affich_four.h"
#include "ui_interface_affich_four.h"


interface_Affich_Four::interface_Affich_Four(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interface_Affich_Four)
{
    ui->setupUi(this);
    ui->FourView->setModel(f.afficher());
}


interface_Affich_Four::~interface_Affich_Four()
{
    delete ui;
}

void interface_Affich_Four::on_retPB_clicked()
{
    this->close();
}
