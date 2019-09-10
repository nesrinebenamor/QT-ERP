#include "Commande_Cli.h"

commande_cli::commande_cli(int num_comd, QString cin_cli)
{
    this->num_comd=num_comd;
    this->cin_cli=cin_cli;
}

bool commande_cli :: ajoutCommande(commande_cli *com)
{
    QSqlQuery qry;
    QString p= QString::number(com->getNumCom());
    QString str="insert into CommandeCli values('"+com->getCinCli()+"','"+p+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

QSqlTableModel * commande_cli :: afficherCommande()
{
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("CommandeCli");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();

    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" Client "));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("N° Commande "));

    return model;
}

int commande_cli :: rechercher(QString cin ,int num )
{
    QSqlQuery qry;
    QString n= QString :: number(num);
    QString str="select * from CommandeCli where id_client='"+cin+"' and num_commande='"+n+"'";
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

