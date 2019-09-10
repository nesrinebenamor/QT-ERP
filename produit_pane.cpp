#include "produit_pane.h"
#include "QDebug"
#include <QtSql>
#include "QString"
#include "QSqlQueryModel"


produit_pane :: produit_pane(QString id_prod_pan , QString cause_pan,QString garantie)
{
    this->id_prod_pan=id_prod_pan;
    this->cause_pan =cause_pan;
    this->garantie= garantie;
}

bool produit_pane :: ajoutProduit_pane(produit_pane * pro)
{

    QSqlQuery qry;

    QString str="insert into Produit_Panne values('"+pro->getIdPan()+"','"+pro->getCausePan()+"','"+pro->getGarantie()+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

QSqlQueryModel * produit_pane :: afficherProduitPane()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from Produit_Panne ";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant produit en panne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("garantie"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type de panne"));

    return model;
}

QSqlQueryModel * produit_pane :: RechercheProduitPane(QString ref)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from Produit_Panne where id_Prod_Pan='"+ref+"'";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant produit en panne"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("garantie"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type de panne"));

    return model;
}


bool produit_pane :: modifierProduitPane(produit_pane * proP)
{

    QSqlQuery qry;

    QString str="update Produit_Panne set id_Prod_Pan='"+proP->getIdPan()+"', type_panne = '"+proP->getCausePan()+"', garantie = '"+proP->getGarantie()+"' where id_Prod_Pan='"+proP->getIdPan()+"'";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

bool produit_pane::supprimerProduitPane(QString reference)
{


    QSqlQuery query;
    QString str="delete from Produit_Panne where id_Prod_Pan ='"+reference+"'";
    qDebug()<<str;
    bool res = query.exec(str);

return res;
}









