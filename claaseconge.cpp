#include "claaseconge.h"
#include "QString"
#include "QSqlQuery"
#include "QDebug"
claaseconge ::claaseconge(QString CIN_Employee, QString date_debut, QString date_fin)
{
this->CIN_Employee= CIN_Employee;
this->date_debut= date_debut;
this->date_fin= date_fin;
}

bool claaseconge :: ajouter_claaseconge(claaseconge *c)
{ QSqlQuery query;
    QString str="insert into conge values('"+c->getCIN_Employee()+"','"+c->getdate_debut()+"','"+c->getdate_fin()+"')";
    qDebug()<<str;

   bool res=query.exec(str);
    return res;
}

QSqlQueryModel * claaseconge :: afficherconges()
{
      QSqlQueryModel * model= new QSqlQueryModel();

      QString str="select * from conge";
      model->setQuery(str);

     model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN Employe "));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date debut "));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("Date fin"));


      return model;
}
