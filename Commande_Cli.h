#ifndef COMMANDE_CLI_H
#define COMMANDE_CLI_H

#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
#include <QtSql>
#include"produit.h"

class commande_cli
{
private :
    int num_comd;
    QString cin_cli;
public:
    commande_cli(){};
    commande_cli(int num_comd, QString cin_cli);

    int getNumCom(){return(num_comd);};
    QString getCinCli(){return(cin_cli);};

    bool ajoutCommande(commande_cli *com);
    QSqlTableModel * afficherCommande();
    int rechercher(QString cin,int num);

};
#endif // COMMANDE_CLI_H
