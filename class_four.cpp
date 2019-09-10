#include "class_four.h"

class_four::class_four(QString cin_four, QString fax)
{
 this->cin_four=cin_four;
 this->fax=fax;
}

class_four :: class_four(QString nom, QString prenom,QString CIN, QString adresse,QString numTel, QString cin_four, QString fax) : personne(nom,prenom,CIN,adresse, numTel)
{
this->cin_four=cin_four;
this->fax=fax;
}

bool class_four :: ajoutFour(class_four * four)
{

    QSqlQuery qry;
    QString str="insert into Fournisseurs values('"+four->getCin_four()+"','"+four->getFax()+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}


int class_four :: rechercher(QString cin)
    {
        QSqlQuery qry;
        QString str="select * from Fournisseurs where CinFour='"+cin+"'";
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


QSqlQueryModel * class_four ::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    createConnection();
    model->setQuery("select Personnes.CIN, Personnes.nom, Personnes.prenom, Personnes.adresse , Personnes.numTel , Fournisseurs.fax from Personnes inner join Fournisseurs on(Fournisseurs.CinFour=Personnes.CIN)");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("numTel"));
    model->setHeaderData(5,Qt::Horizontal, QObject::tr("Fax"));


    return model;
}
