#ifndef ORDREMAINT_H

#define ORDREMAINT_H
#include <QtGui/QApplication>
#include  <QString>
#include "QSqlQueryModel"
#include <QtSql>

class ordremaint
{
   private :

    QString ref_prod;
    int num_ordre;
    QString descision;
public:
    ordremaint(){};
    ordremaint(QString ref_prod,int num_ordre,QString descision);

    int getnum(){return(num_ordre);}
    QString getRefProd(){return(ref_prod);}
    QString getDescision(){return(descision);}

    bool ajoutOrdre( ordremaint *o);
    bool modifierOrdre(ordremaint * o);
    bool supprimerOrdre(QString reference);

};

#endif // ORDREMAINT_H
