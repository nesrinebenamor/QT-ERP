#include "entree_sortie.h"
#include "ui_entree_sortie.h"
#include "articlehorsstock.h"
#include"affichcommande.h"
#include"int_pass_comm_fou.h"

Entree_Sortie::Entree_Sortie(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Entree_Sortie)
{
    ui->setupUi(this);
}

Entree_Sortie::~Entree_Sortie()
{
    delete ui;
}

void Entree_Sortie::on_PassComLB_clicked()
{
 int_pass_comm_fou *icm= new int_pass_comm_fou;
 icm->exec();
}

void Entree_Sortie::on_ProdIndLB_clicked()
{
  ArticleHorsStock *art= new ArticleHorsStock;
  art->exec();
}

void Entree_Sortie::on_commandLinkButton_clicked()
{
   affichCommande *af = new affichCommande;
   af->exec();
}

void Entree_Sortie::on_retourPB_clicked()
{
    this->close();
}
