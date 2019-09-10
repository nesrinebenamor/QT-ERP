#include "formation.h"
#include"QDebug"
#include"QSqlQuery"
#include"QString"
#include "QMessageBox"
#include "QSqlTableModel"



formation::formation(int Id_Formation,QString nomClient,QString nomFormation ,QString nomFormateur,int nb_heure,int nb_place ,QString id_client ,QString lieu,QString datefin,QString datedebut )
{
    this->Id_Formation= Id_Formation;
    this->id_client= id_client;
    this->nomFormateur=nomFormateur;
    this->nomFormation=nomFormation;
    this->nb_heure=nb_heure;
    this->lieu=lieu;
    this->datedebut=datedebut;
    this->datefin=datefin;
    this->nb_place=nb_place;
    this->nomClient=nomClient;

}


bool formation::ajoutFormation(formation *forma)
{

QSqlQuery query;
QString res3= QString::number(forma->getIdFormation());
QString res= QString::number(forma->getNbHeure());
QString res1= QString::number(forma->getNbPlace());

//qDebug datefin();

QString str="insert into Formation values('"+res3+"','"+forma->getNomClient()+"','"+forma->getNomFormation()+"','"+forma->getNomFormateur()+"','"+res+"','"+res1+"','"+forma->getIdClient()+"','"+forma->getlieu()+"','"+forma->getDateFin()+"','"+forma->getDateDebut()+"')";

qDebug()<<str;
bool res2 = query.exec(str);
return res2;
}

QSqlQueryModel * formation::afficheFormation()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from compte");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Id_Formation"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("id_client"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nomFormateur"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" nomFormation"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("lieu"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("datedebut"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("datefin"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nb_place"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("nomClient"));

    return model;
}


bool formation::supprimerforma(int Id_formation)
{
    QSqlQuery query;
    QString str="delete from formation where Id_formation ="+Id_formation;
    qDebug()<<str;
    bool res = query.exec(str);
    return res;
}



bool formation:: modif_forma(formation *forma)
{
    QSqlQuery query;
    QString f1=QString::number(forma->getIdFormation());
    QString f3=QString::number(forma->getNbHeure());
    QString f4=QString::number(forma->getNbPlace());
    QString str="update Formation set Id_Formation='"+f1+"',nomClient='"+forma->getNomClient()+"',nomFormation='"+getNomFormation()+"',nomFormateur='"+forma->getNomFormateur()+"',nb_heure='"+f3+"',nb_place='"+f4+"',id_client='"+getIdClient()+"',lieu='"+forma->getlieu()+"',datefin='"+getDateFin()+"',datedebut='"+getDateDebut()+"' where Id_Formation="+f1+"";
    //QString str="(update Formation set nomFormation='"+getNomFormation()+"',nomFormateur='"+forma->getNomFormateur()+"',nb_heure='"+f3+"',nb_place='"+f4+"',id_client='"+getIdClient()+"',lieu='"+forma->getlieu()+"',datefin='"+getDateFin()+"',datedebut='"+getDateDebut()+"' where Id_Formation='"+f1+"')";
    //("update Formation set nomFormation='"+getNomFormation()+"',nomFormateur='"+forma->getNomFormateur()+"',nb_heure='"+f3+"',nb_place='"+f4+"',id_client='"+getIdClient()+"',lieu='"+forma->getlieu()+"',datefin='"+getDateFin()+"',datedebut='"+getDateDebut()+"' where Id_Formation='"+f1+"'");
    qDebug()<<str;
    bool res1 =query.exec(str);
    return res1;
}



