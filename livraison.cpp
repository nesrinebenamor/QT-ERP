#include "livraison.h"
#include "ui_livraison.h"
#include "dialog.h"
#include"sortie.h"

Livraison::Livraison(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Livraison)
{
    ui->setupUi(this);
}

Livraison::~Livraison()
{
    delete ui;
}

void Livraison::on_EntreeLB_clicked()
{

    Dialog *wr=new Dialog();
    wr->exec();
}

void Livraison::on_SoriteLB_clicked()
{
    sortie *ws=new sortie();
    ws->exec();
}

void Livraison::on_retourPB_clicked()
{
    this->close();
}
