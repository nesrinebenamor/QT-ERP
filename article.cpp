#include <QtGui/QApplication>
#include "article.h"
#include "ui_article.h"
#include "produit.h"

#include <QMessageBox>

article::article(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::article)
{
    ui->setupUi(this);
 }

article::~article()
{
    delete ui;
}

void article::on_OkpB_clicked()
{
   QString type,ref_prod,nom_prod;
   double  prix;

   type=ui->typeLE->text();
   ref_prod=ui->refLE->text();
   prix=ui->prixdSB->value();
   nom_prod=ui->nomLE->text();

   produit *p = new produit(ref_prod,nom_prod,prix,type);

   if (p->ajoutProduit(p))
       QMessageBox::information(0, qApp->tr("Ajout"),
           qApp->tr("Un nouveau Produit a été ajouté"), QMessageBox::Ok);
   else
       QMessageBox::critical(0, qApp->tr("Ajout"),
           qApp->tr("Probléme d'ajout"), QMessageBox::Cancel);

       ui->typeLE->clear();
      ui->refLE->clear();
      ui->prixdSB->clear();
      ui->nomLE->clear();
}

void article::on_fermerpB_clicked()
{
    this->close();
}
