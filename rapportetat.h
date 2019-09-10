#ifndef RAPPORTETAT_H
#define RAPPORTETAT_H

#include <QtGui/QApplication>
#include  <QString>
#include "QSqlQueryModel"
#include <QtSql>

class rapportetat

{
     QString ref_prod;
public:
     rapportetat(){};
     rapportetat(QString ref_prod);

     QString getRefProd(){return(ref_prod);}

      int rechercherRapport( rapportetat * rap);
};

#endif // RAPPORTETAT_H
