#ifndef CLASS_LIGNECOMMANDEFOU_H
#define CLASS_LIGNECOMMANDEFOU_H
#include "connection.h"
#include"produit.h"
#include"commande_four.h"
#include"QString"
#include <QtGui/QApplication>

class class_ligneCommandeFou
{
    QString id_four;
    QString id_prod;
    int id_comm;
    int qte_comm;
public:
    class_ligneCommandeFou(){};
    class_ligneCommandeFou(QString id_four,QString id_prod, int id_comm,int qte_comm);

    QString get_IdFour(){return(id_four);};
    QString get_idProd(){return(id_prod);};
    int get_IdComm(){return(id_comm);};
    int getqte_comm(){return(qte_comm);};

  bool ajoutLigneCommandeFour(class_ligneCommandeFou * lgc);
   QSqlQueryModel * afficherLigneCommFou();
};

#endif // CLASS_LIGNECOMMANDEFOU_H
