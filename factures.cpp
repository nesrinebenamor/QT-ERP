#include "factures.h"
//#include"connection.h"
#include"QSqlQueryModel"
#include<QStandardItemModel>
#include<QtSql>
#include"QTableView"
#include"QDebug"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
factures::factures(QString id_facture, QString totale_facture,QString nom_client,QString produit,QString date_facture,QString remarques)
{
     this->id_facture=id_facture;
     this->totale_facture=totale_facture;
     this->nom_client=nom_client;
     this->produit=produit;
     this->date_facture=date_facture;
     this->remarques=remarques;
}
factures::factures()
{id_facture="";
    totale_facture="";
    nom_client="";
    produit="";
    date_facture="";
    remarques="";
}
bool factures::ajoutfacture(factures *m)
{

   QSqlQuery query;

   QString str="insert into facture values('"+ m->get_id_facture()+"','"+m->get_totale_facture()+"','"+m->get_nom_client()+"','"+m->get_produit()+"','"+m->get_date_facture()+"','"+m->get_remarques()+"')";
    qDebug()<<str;
    bool res1 = query.exec(str);
    return res1;

}

QSqlQueryModel * factures::afficherfactures()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from facture");

    return model;
}
QSqlQueryModel * factures::rechercherFacture(QString id)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str=("select * from facture where id_facture in(lower('"+id+"'),upper('"+id+"')) ");
    model->setQuery(str);

    return model;

}
bool factures::supprimerfacture(QString id)
{
    QSqlQuery query;
    QString str=("delete from facture where id_facture='"+id+"'");
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}

