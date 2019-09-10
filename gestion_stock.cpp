#include "gestion_stock.h"
#include "ui_gestion_stock.h"
#include "dialog.h"
#include"sortie.h"
#include"produit.h"
#include"gestion_articles.h"
#include"livraison.h"
#include"entree_sortie.h"
#include"interface_gestion_four.h"

gestion_stock::gestion_stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_stock)
{
    ui->setupUi(this);
}

gestion_stock::~gestion_stock()
{
    delete ui;
}

void gestion_stock::on_QuiPb_clicked()
{
    exit(1);
}



void gestion_stock::on_Gestion_ArticlespB_clicked()
{
   gestion_articles *ga= new gestion_articles;
   ga->show();
   this->close();
}

void gestion_stock::on_LivrPB_clicked()
{
 Livraison *l=new Livraison ;
 l->exec();
}

void gestion_stock::on_CommandePB_clicked()
{
    Entree_Sortie *esw= new Entree_Sortie ;
    esw->exec();
}

void gestion_stock::on_FourPB_clicked()
{
    interface_gestion_four *igf=new interface_gestion_four;
    igf->show();
    this->close();
}
