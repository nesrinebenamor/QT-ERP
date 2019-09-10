#include "utilisateur.h"

utilisateur::utilisateur(QString nom_utilisateur , QString pass, QString cin, int typ)
{
   this->nom_utilisateur=nom_utilisateur;
   this->pass=pass;
   this->cin=cin;
   this->typ=typ;
}

utilisateur::utilisateur(QString nom_utilisateur ,QString pass)
{
   this->nom_utilisateur=nom_utilisateur;
   this->pass=pass;
}

int utilisateur :: verifier_utilisateur(QString nom_uti, QString pas)
{
    QSqlQuery qry;
    int count=-1;
    if(qry.exec("select * from Authentification where nomUti='"+nom_uti+"' and motDePasse='"+pas+"'"))
    {
        count=0;
        while(qry.next())
       {
          count++;
       }
    }
    return(count);
}

bool utilisateur::ajouter_utilisateur(utilisateur *p)
{
QSqlQuery query;
QString t = QString :: number(p->getTyp());
QString str= "insert into Authentification values('"+p->getNomUti()+"','"+p->getPass()+"','"+p->getCin()+"','"+t+"')";
qDebug()<<str;
if (query.exec(str))
    return true;
else
    return false;
}

QSqlQueryModel * utilisateur::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from Authentification");
    return model;
}

int utilisateur :: ouvrir_module(QString ut,QString pa)
{
    QSqlQuery qry;
    int typ;
    if(qry.exec("select * from Authentification where nomUti='"+ut+"' and motDePasse='"+pa+"' "))
    {
        while(qry.next())
       {
          typ=qry.value(3).toInt();
       }
    }

    return(typ);
}
