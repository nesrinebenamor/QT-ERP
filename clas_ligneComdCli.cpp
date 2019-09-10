#include "clas_ligneComdCli.h"
#include <QString>

clas_ligneComdCli :: clas_ligneComdCli(QString id_Cli,QString id_prod, int id_comd,int qte_comd)
{
    this->id_Cli=id_Cli;
    this->id_comd=id_comd;
    this->qte_comd=qte_comd;
    this->id_prod=id_prod;
}

bool clas_ligneComdCli :: ajoutLigneCommandeCli(clas_ligneComdCli * lignc)
{
   QSqlQuery qry;
   QString p= QString::number(lignc->get_IdComd());
   QString p1=QString :: number(lignc->getqte_comd());
   QString str="insert into LigneCommandeClient values('"+p+"','"+lignc->get_IdCli()+"','"+lignc->get_idProd()+"','"+p1+"')";
   qDebug()<<str;
   bool res1 = qry.exec(str);
   return res1;
}

QSqlQueryModel * clas_ligneComdCli ::afficherLigneCommCli()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str="select * from LigneCommandeClient ";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Num Commande"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN Fournisseur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Reference Produit"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite Commande"));
    return model;
}
