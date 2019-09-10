#ifndef CLAS_LIGNECOMDCLI_H
#define CLAS_LIGNECOMDCLI_H


#include "connection.h"
#include"produit.h"
#include"QString"
#include <QtGui/QApplication>

class clas_ligneComdCli
{
    QString id_Cli;
    QString id_prod;
    int id_comd;
    int qte_comd;
public:
    clas_ligneComdCli(){};
    clas_ligneComdCli(QString id_Cli,QString id_prod, int id_comd,int qte_comd);

    QString get_IdCli(){return(id_Cli);};
    QString get_idProd(){return(id_prod);};
    int get_IdComd(){return(id_comd);};
    int getqte_comd(){return(qte_comd);};

  bool ajoutLigneCommandeCli(clas_ligneComdCli * lignc);
  QSqlQueryModel * afficherLigneCommCli();
};

#endif // CLAS_LIGNECOMDCLI_H
