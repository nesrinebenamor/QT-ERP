#include "Client.h"
#include <QDebug>
#include <QSqlQuery>

Client :: Client( QString cin_client)
{
   this->cin_client=cin_client;

}
bool Client :: ajoutClient(Client * cli)
{
    QSqlQuery qry;

    QString str="insert into Clients values('"+cli->getCinClient()+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

QSqlQueryModel * Client::afficherClient()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from Personnes INNER JOIN Clients on Clients.cin_client=Personnes.CIN");
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("tel"));
    return model;
}
QSqlQueryModel * Client::rechercherClient(QString c)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from Personnes INNER JOIN Clients on (Clients.cin_client=Personnes.CIN and Clients.cin_client='"+c+"')";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("cin"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("tel"));


    return model;

}

bool Client::supprimerClient(QString c)
{
    QSqlQuery query;
    QString str="delete from Clients where cin_client='"+c+"'  ";
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}
int Client :: rechercher(QString cin)
{
    QSqlQuery qry;
    QString str="select * from Clients where cin_client='"+cin+"'";
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
