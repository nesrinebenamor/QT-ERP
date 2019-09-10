#ifndef PRODUIT_PANE_H
#define PRODUIT_PANE_H

#include <QtGui/QApplication>
#include  <QString>

#include "QSqlQueryModel"
#include <QtSql>
#include"connection.h"
//#include "produit.h"

class produit_pane
{
private :
    QString id_prod_pan;
    QString cause_pan;
    QString garantie;

public:
    produit_pane(){};
  //  produit_pane(QString ref_prod,QString nom_prod,double prix,QString type,QString id_prod_pan , QString cause_pan,QString garantie );
    produit_pane(QString id_prod_pan , QString cause_pan,QString garantie);

    QString getIdPan(){return(id_prod_pan);}
    QString getCausePan(){return(cause_pan);}
    QString getGarantie(){return(garantie);}

    bool ajoutProduit_pane(produit_pane *proP);
    bool  modifierProduitPane(produit_pane * proP);
    bool supprimerProduitPane(QString reference);

     QSqlQueryModel *afficherProduitPane();
     QSqlQueryModel * RechercheProduitPane(QString ref);
};

#endif // PRODUIT_PANE_H
