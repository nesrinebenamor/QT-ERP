#include "ordremaint.h"

ordremaint:: ordremaint(QString ref_prod,int num_ordre,QString descision)
{
  this->ref_prod=ref_prod;
 this->num_ordre=num_ordre;
 this->descision=descision;
}

bool ordremaint :: ajoutOrdre(ordremaint * o)
{


    QSqlQuery qry;
    QString num= QString::number(o->getnum());
    QString str="insert into Ordre values('"+o->getRefProd()+"','"+num+"','"+o->getDescision()+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

bool ordremaint :: modifierOrdre(ordremaint * o)
{

    QSqlQuery qry;

    QString str="update Ordre set id_Prod_Pan='"+o->getRefProd()+"',num_ordre='"+o->getnum()+"', descision = '"+o->getDescision()+"', ";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

 bool ordremaint :: supprimerOrdre(QString reference)
{


    QSqlQuery query;
    QString str="delete from Ordre where id_Prod_Pan ='"+reference+"'";
    qDebug()<<str;
    bool res = query.exec(str);

return res;
}
