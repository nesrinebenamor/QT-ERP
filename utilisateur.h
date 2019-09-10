#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
#include <QtSql>

class utilisateur
{
  private :
     QString nom_utilisateur;
     QString pass;
     QString cin;
     int typ;
public:
    utilisateur(){};
    utilisateur(QString nom_utilisateur,QString pass,QString cin, int typ);
    utilisateur(QString nom_utilisateur,QString pass);
    QString getNomUti(){return(nom_utilisateur);};
    QString getPass(){return(pass);};
    QString getCin(){return(cin);};
    int getTyp(){return(typ);};

    int verifier_utilisateur(QString nom_uti,QString pas);
    bool ajouter_utilisateur(utilisateur *p);
    int ouvrir_module(QString ut,QString pa);
    QSqlQueryModel * afficher();
};

#endif // UTILISATEUR_H
