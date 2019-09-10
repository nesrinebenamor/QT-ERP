#include "produit.h"
#include "QDebug"
#include "connection.h"
#include <QtSql>
produit:: produit(QString ref_prod,QString nom_prod,double prix,QString type, int qte_stock)
{
    this->ref_prod=ref_prod;
    this->nom_prod=nom_prod;
    this->prix=prix;
    this->type=type;
    this->qte_stock=qte_stock;
}

produit:: produit(QString ref_prod,QString nom_prod,double prix,QString type)
{
    this->ref_prod=ref_prod;
    this->nom_prod=nom_prod;
    this->prix=prix;
    this->type=type;
}

bool produit :: ajoutProduit(produit * pro)
{

    QSqlQuery qry;
    QString p= QString::number(pro->getPrix());
    QString str="insert into Produits(type,ref,prix,nom) values('"+pro->getType()+"','"+pro->getRefProd()+"','"+p+"','"+pro->getNomProd()+"')";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}


QSqlQueryModel * produit :: afficherProduitInd()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    int n=0;
    QString nn= QString :: number(n);
    QString str="select * from Produits where qte_stock= '"+nn+"' ";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference Produit"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type Produit"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));

    return model;
}


QSqlTableModel * produit :: modProd(QString ref)
{
    QSqlTableModel *model = new QSqlTableModel();
    model->setTable("Produits");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->select();
    model->setFilter("ref='"+ref+"'");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference "));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix "));

    return model;
}

QSqlQueryModel * produit :: afficherProduit()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    QString str="select * from Produits ";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference Produit"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type Produit"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));

    return model;
}

bool produit::supprimerProduit(QString ref)
{

    //createConnection();
    QSqlQuery query;
    QString str="delete from Produits where ref ='"+ref+"'";
    qDebug()<<str;
    bool res = query.exec(str);

return res;
}

QSqlQueryModel * produit ::rechercherProduit(QString ref)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    //createConnection();
    QString str="select * from Produits where ref ='"+ref+"'";
    model->setQuery(str);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference Produit"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom Produit"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type Produit"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Prix"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Quantite"));
    return model;
}

int produit :: rechercher(QString ref)
{
    QSqlQuery qry;
    QString str="select * from Produits where ref ='"+ref+"'";
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

bool produit :: modifierProduit(produit * pro)
{

    QSqlQuery qry;
    QString p= QString::number(pro->getPrix());
    QString str="update Produits set type='"+pro->getType()+"', prix='"+p+"', nom = '"+pro->getNomProd()+"' where ref='"+pro->getRefProd()+"'";
    qDebug()<<str;
    bool res1 = qry.exec(str);
    return res1;
}

bool produit :: valider_achat(QString ref_prod_command, int qt)
{
    QSqlQuery qry1;
    QString q=QString :: number(qt);
    qry1.prepare("update Produits set qte_stock=qte_stock + '"+q+"' where ref='"+ref_prod_command+"'");
    return(qry1.exec());
}

bool produit :: valider_vente(QString ref_prod_command, int qt)
{
    QSqlQuery qry1;
    QString q=QString :: number(qt);
    qry1.prepare("update Produits set qte_stock=qte_stock - '"+q+"' where ref='"+ref_prod_command+"'");
    return(qry1.exec());
}
