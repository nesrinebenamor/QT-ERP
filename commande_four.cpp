#include "commande_four.h"

commande_four::commande_four(int num_comm, QString cin_four)
{
    this->num_comm=num_comm;
    this->cin_four=cin_four;
}

bool commande_four :: ajoutCommande(commande_four *com)
{
    QSqlQuery qry;
    QString p= QString::number(com->getNumCom());
    QString str="insert into CommandeFou values('"+com->getCinFour()+"','"+p+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

QSqlTableModel * commande_four :: afficherCommande()
{
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("CommandeFou");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" Fournisseurs "));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("N° Commande "));

    return model;
}

int commande_four :: rechercher(QString cin ,int num )
{
    QSqlQuery qry;
    QString n= QString :: number(num);
    QString str="select * from CommandeFou where id_Fou='"+cin+"' and num_commande='"+n+"'";
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
