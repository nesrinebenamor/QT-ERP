#include "int_pass_comm_fou.h"
#include "ui_int_pass_comm_fou.h"
#include"commande_fournisseurs.h"
#include"lignecommandefour.h"

int_pass_comm_fou::int_pass_comm_fou(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::int_pass_comm_fou)
{
    ui->setupUi(this);
}

int_pass_comm_fou::~int_pass_comm_fou()
{
    delete ui;
}

void int_pass_comm_fou::on_AjComLB_clicked()
{
    commande_fournisseurs * cf = new commande_fournisseurs;
    cf->exec();
}

void int_pass_comm_fou::on_LigcomLB_clicked()
{
    LigneCommandeFour *lig_commande_four = new LigneCommandeFour;
    lig_commande_four->exec();
}

void int_pass_comm_fou::on_retourPB_clicked()
{
    this->close();
}
