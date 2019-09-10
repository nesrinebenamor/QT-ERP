#ifndef PERSONNES_H
#define PERSONNES_H
#include <QtSql>
#include "QSqlQueryModel"
#include "QString"
class personne
{
protected:
    QString nom;
    QString prenom;
    QString CIN;
    QString adresse;
    QString numTel;


public:
    personne(){};
    personne( QString nom, QString prenom,QString CIN, QString adresse,QString numTel);
    QString getnom(){return nom;} ;
    QString getprenom(){return prenom;} ;
    QString getCIN(){return CIN;} ;
    QString getadresse(){return adresse;} ;
    QString getnumTel(){return numTel;} ;

    bool ajouter_personne(personne *p);
   virtual int rechercher(QString cin);
   virtual QSqlQueryModel * afficher();
};

#endif // PERSONNES_H
