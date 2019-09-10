#include "absence.h"
#include"QDebug"
#include "QSqlQuery"
#include "QString"
#include "string"
#include "QSqlQueryModel"

absence::absence(QString CIN_Employee , QString cause, QString justifie)
{
    this->CIN_Employee= CIN_Employee;
    this->cause=cause;
    this->justifie=justifie;

}


bool absence::ajoutAbsence(absence *A)
{
    QSqlQuery query;
    QString str= "insert into absence(CIN_Employee,cause,justifie) values('"+A->getCin_employee()+"','"+A->getCause()+"','"+A->getJustifie()+"')";
    qDebug()<<str;
    bool res1 = query.exec(str);
    return res1;

}



QSqlQueryModel * absence::afficherAbsence()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from absence");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN_Employee"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("cause"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("justifie"));


    return model;
}


bool absence::supprimerAbsence(QString CIN_Employee)
{
    QSqlQuery query;
    QString str="delete from absence where CIN_Employee ="+CIN_Employee;
    qDebug()<<str;
    bool res = query.exec(str);
    return res;
}



QSqlQueryModel * absence ::rechercherAbsence(QString cin_employee)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    //createConnection();
    QString str="select * from absence where CIN_employee ='"+getCin_employee()+"'";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN_Employee"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("cause"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("justifie"));

    return model;
}
