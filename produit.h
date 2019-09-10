#ifndef PRODUIT_H
#define PRODUIT_H
#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
//#include <QtGui>
#include <QtSql>

class produit
{
  private :
    QString ref_prod;
    QString nom_prod;
    QString type;
    int qte_stock;
    double prix;

public:
    produit(){};
    produit(QString ref_prod,QString nom_prod,double prix,QString type,int qte_stock);
    produit(QString ref_prod,QString nom_prod,double prix,QString type);

    QString getRefProd(){return(ref_prod);};
    QString getNomProd(){return(nom_prod);};
    int getQtstock(){return(qte_stock);};
    double getPrix(){return(prix);};
    QString getType(){return(type);};

    bool ajoutProduit(produit *pro);


    QSqlTableModel * modProd(QString ref);
    QSqlQueryModel * afficherProduit();
    bool supprimerProduit(QString ref);
    QSqlQueryModel * rechercherProduit(QString ref);
    int rechercher(QString ref);
    bool modifierProduit(produit * pro);
    bool valider_achat(QString ref_prod_command,int qt);
    bool valider_vente(QString ref_prod_command,int qt);
    QSqlQueryModel * afficherProduitInd();

};

#endif // PRODUIT_H
