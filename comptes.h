#ifndef COMPTES_H
#define COMPTES_H
#include"QString"
#include "QSqlQueryModel"

class comptes
{

private :
    QString num_compte ;
    QString banque ;
    QString remarques_2 ;
    QString date;



public :

     bool ajoutcompte(comptes *m);
    virtual QSqlQueryModel * affichercompte();

QSqlQueryModel * rechercherCompte(QString id);
    bool supprimerCompte(QString id);


     QString get_num_compte(){return num_compte ;} ;
     QString get_banque(){return banque ;} ;

     QString get_remarques_2(){return remarques_2 ;} ;
     QString get_date(){return date ;} ;

     comptes();

     comptes( QString num_compte ,
     QString banque , QString date,
     QString remarques_2);
};

#endif // COMPTES_H

