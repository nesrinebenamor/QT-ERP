#include "Personnes.h"
#include<Qstring>
#include "connection.h"

personne::personne(QString nom,QString prenom,QString CIN,QString adresse,QString numTel)
{
    this->nom=nom;
    this->prenom=prenom;
    this->CIN=CIN;
    this->numTel=numTel;
    this->adresse=adresse;
}

    bool personne::ajouter_personne(personne *p)
    {

    QSqlQuery query;

    QString str= "insert into Personnes(nom,prenom,CIN,adresse,numTel) values('"+getnom()+"','"+getprenom()+"','"+getCIN()+"','"+getadresse()+"','"+getnumTel()+"')";
    qDebug()<<str;
    if (query.exec(str))
        return true;
    else
        return false;


    }
    QSqlQueryModel * personne::afficher()
    {
        QSqlQueryModel * model= new QSqlQueryModel();
        createConnection();
        model->setQuery("select * from Personnes");
        model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("numTel"));


        return model;
    }

int personne :: rechercher(QString cin)
    {
        QSqlQuery qry;
        QString str="select * from Personnes where CIN ='"+cin+"'";
        int count=-1;
        if(qry.exec(str))
        {
            count=0;
            while(qry.next())
           {
              count++;
           }
        }
        return(count);
    }
