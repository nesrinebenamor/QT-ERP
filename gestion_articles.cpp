#include "gestion_articles.h"
#include "ui_gestion_articles.h"
#include "article.h"
#include"listemat.h"
#include"recherche.h"
#include "dialog.h"
#include"sortie.h"
#include"produit.h"
#include"modification.h"
#include"stock.h"
#include"gestion_stock.h"

gestion_articles::gestion_articles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gestion_articles)
{
    ui->setupUi(this);
}

gestion_articles::~gestion_articles()
{
    delete ui;
}

void gestion_articles::on_AjoutLB_clicked()
{
    article *w1=new article();
    w1->exec();
}

void gestion_articles::on_SuppLB_clicked()
{
    ListeMat *w2=new ListeMat;
    w2->exec();
}

void gestion_articles::on_ModLB_clicked()
{
    modification *wm=new modification;
    wm->exec();
}

void gestion_articles::on_AfficherLB_clicked()
{
   Stock * s = new Stock ;
   s->exec();
}

void gestion_articles::on_RechercheLB_clicked()
{
    recherche *wr=new recherche;
    wr->exec();
}

void gestion_articles::on_retourPB_clicked()
{
    gestion_stock *gestion = new gestion_stock;
    gestion->show();
    this->close();
}
