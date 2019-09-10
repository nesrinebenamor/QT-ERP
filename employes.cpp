#include"employes.h"
#include"QSqlQueryModel"
#include"connection.h"
#include "QDebug"
#include"QString"
#include <QStandardItemModel>
#include <QtSql>
#include "QTableView"


employes::employes(QString id_employes,QString grade,QString num_post,QString date_am)

{
    this->id_employes=id_employes;
    this->grade=grade;
    this->num_post=num_post;
    this->date_am=date_am;
}

employes::employes()
{
   id_employes=" ";
   grade=" ";
    num_post=" ";;
   date_am=" ";
}

employes :: employes(QString nom, QString prenom,QString CIN, QString adresse,QString num_tel,QString id_employes, QString grade ,QString num_post ,QString date_am): personne (nom,prenom,CIN, adresse,num_tel)
{
    this->id_employes=id_employes;
    this->grade=grade;
    this->num_post=num_post;
    this->date_am=date_am;
}

bool employes::ajoutEMP(employes *m)
{
   QSqlQuery query ;
   QString str;
   str="insert into Empolyees values('"+m->get_id_employes()+"','"+m->get_grade()+"','"+m->get_num_post()+"','"+m->get_date_am()+"','')";
    qDebug()<<str;

   bool res=query.exec(str);
    return res;

}

QSqlQueryModel * employes::rechercheremployes(QString cn)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString str=("select CIN,nom,prenom from Employees where CIN in(lower('"+cn+"'),upper('"+cn+"')) ");
model->setQuery(str);
}

QSqlQueryModel * employes::afficheremployes()
{

      QSqlQueryModel * model= new QSqlQueryModel();
        createConnection();
        QString str="select Personnes.CIN, Personnes.nom , Personnes.prenom , Personnes.adresse , Personnes.numTel , Empolyees.grade , Empolyees.num_Poste, Empolyees.dateAm from Personnes INNER Join Empolyees on(Empolyees.CIN_Employee = Personnes.CIN)";
        model->setQuery(str);

       model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
       model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
       model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
       model->setHeaderData(4, Qt::Horizontal, QObject::tr("num_tel"));
        model->setHeaderData(5, Qt::Horizontal, QObject::tr("grade"));
        model->setHeaderData(6, Qt::Horizontal, QObject::tr("num_post"));
        model->setHeaderData(7, Qt::Horizontal, QObject::tr("date_am"));

        return model;

    }


bool employes::supprimeremployes(QString cn)
{
    QSqlQuery query;
    QString str=("delete from Empolyees where CIN_Employee ='"+cn+"'");
    qDebug()<<str;
    bool res = query.exec(str);
    return res;

}


QSqlQueryModel * employes ::rechercherCIN(QString CIN)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    QString str="select * from Empolyees where CIN_Employee = '"+CIN+"'";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("num_tel"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("id_employes"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("grade"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("num_post"));
    model->setHeaderData(8, Qt::Horizontal, QObject::tr("date_am"));

    return model;

}
