#include "comptes.h"
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

comptes::comptes( QString num_compte,QString banque,QString date,QString remarques_2)
{this->num_compte=num_compte;
this->banque=banque;

this->date=date;
this->remarques_2=remarques_2;
}

comptes::comptes()
{num_compte="";
    banque="";
    date="";
    remarques_2="";
}

bool comptes::ajoutcompte(comptes *m)
{

   QSqlQuery query;

   QString str="insert into comptes values('"+ m->get_num_compte()+"','"+m->get_banque()+"','"+m->get_date()+"','"+m->get_remarques_2()+"')";
    qDebug()<<str;
    bool res1 = query.exec(str);
    return res1;

}

QSqlQueryModel * comptes::affichercompte()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from comptes");

    return model;
}


QSqlQueryModel * comptes::rechercherCompte(QString id)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str=("select * from comptes where num_comp in(lower('"+id+"'),upper('"+id+"')) ");
    model->setQuery(str);

    return model;

}
bool comptes::supprimerCompte(QString id)
{
    QSqlQuery query;
    QString str=("delete from comptes where num_comp='"+id+"'");
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}
