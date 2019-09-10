#include "interface_gestion_four.h"
#include "ui_interface_gestion_four.h"
#include"gestion_stock.h"

interface_gestion_four::interface_gestion_four(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::interface_gestion_four)
{
    ui->setupUi(this);
}

interface_gestion_four::~interface_gestion_four()
{
    delete ui;
}

void interface_gestion_four::on_AjoutLB_clicked()
{
    interface_fournisseur * wif= new interface_fournisseur;
    wif->exec();
}

void interface_gestion_four::on_AffichLB_clicked()
{
    interface_Affich_Four * wiaf= new interface_Affich_Four;
    wiaf->exec();
}

void interface_gestion_four::on_retourPB_clicked()
{
    gestion_stock * int_gestion = new gestion_stock;
    int_gestion->show();
    this->close();
}
