#ifndef FORMATION_H
#define FORMATION_H
#include <QtGui/QApplication>

#include"QString"

#include "QSqlQueryModel"
#include "QSqlTableModel"



class formation
{
private :
  int Id_Formation;
  QString id_client;
  int nb_place;
  QString nomClient;
  QString nomFormation;
  QString nomFormateur;
  QString lieu;
  int nb_heure;

  QString datefin;
  QString datedebut;


public:
    formation();
    formation(int Id_Formation,QString nomClient,QString nomFormation,QString nomFormateur,int nb_heure,int nb_place,QString id_client ,QString lieu,QString datefin,QString datedebut );
    int getIdFormation(){return(Id_Formation);};
    QString getIdClient(){return(id_client);};
    QString getNomFormateur(){return(nomFormateur);};
    QString getNomClient(){return(nomClient);};
    QString getNomFormation(){return(nomFormation);};
    QString getlieu(){return(lieu);};
    int getNbHeure(){return(nb_heure);};
    int getNbPlace(){return(nb_place);};
    QString getDateDebut(){return(datedebut);};
    QString getDateFin(){return(datefin);};

    bool ajoutFormation(formation *forma);
    virtual QSqlQueryModel * afficheFormation();
    bool supprimerforma (int Id_Formation);
    bool modif_forma(formation *forma);
    //QSqlTableModel * modforma(int Id_Formation);


};

#endif // FORMATION_H
