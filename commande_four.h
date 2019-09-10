#ifndef COMMANDE_FOUR_H
#define COMMANDE_FOUR_H
#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
#include <QtSql>
#include"produit.h"

class commande_four
{
private :
    int num_comm;
    QString cin_four;
public:
    commande_four(){};
    commande_four(int num_comm, QString cin_four);

    int getNumCom(){return(num_comm);};
    QString getCinFour(){return(cin_four);};

    bool ajoutCommande(commande_four *com);
    QSqlTableModel * afficherCommande();
    int rechercher(QString cin,int num);

};

#endif // COMMANDE_FOUR_H
