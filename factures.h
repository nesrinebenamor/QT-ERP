#ifndef FACTURES_H
#define FACTURES_H
#include"QString"
#include "QSqlQueryModel"
#include"factures.h"

class factures

{
    private:
        QString id_facture ;
        QString totale_facture ;
        QString nom_client ;
        QString remarques ;
        QString date_facture ;
        QString produit ;


    public:

         bool ajoutfacture(factures *m);


virtual QSqlQueryModel * afficherfactures();
         bool supprimerfacture(QString id);
         QSqlQueryModel * rechercherFacture(QString id);



         QString get_id_facture(){return id_facture ;} ;
         QString get_totale_facture(){return totale_facture ;} ;
         QString get_nom_client(){return nom_client ;} ;
         QString get_remarques(){return remarques ;} ;
         QString get_date_facture(){return date_facture ;} ;
         QString get_produit(){return produit ;} ;

         factures();
         factures(QString id_facture,QString totale_facture,QString nom_client,QString produit,QString date_facture,QString remarques);
};


#endif // FACTURES_H
