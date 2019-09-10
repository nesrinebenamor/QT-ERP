#include "class_lignecommandefou.h"

class_ligneCommandeFou::class_ligneCommandeFou(QString id_four, QString id_prod, int id_comm, int qte_comm)
{
    this->id_four=id_four;
    this->id_comm=id_comm;
    this->qte_comm=qte_comm;
    this->id_prod=id_prod;
}

bool class_ligneCommandeFou :: ajoutLigneCommandeFour(class_ligneCommandeFou * lgc)
{
   QSqlQuery qry;
   QString p= QString::number(lgc->get_IdComm());
   QString p1=QString :: number(lgc->getqte_comm());
   QString str="insert into LigneCommandeFou values('"+p+"','"+lgc->get_IdFour()+"','"+lgc->get_idProd()+"','"+p1+"')";
   qDebug()<<str;
   bool res1 = qry.exec(str);
   return res1;
}

QSqlQueryModel * class_ligneCommandeFou ::afficherLigneCommFou()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from LigneCommandeFou ";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Num Commande"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("CIN Fournisseur"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Reference Produit"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite Commande"));

    return model;
}
