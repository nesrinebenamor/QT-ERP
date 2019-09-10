#ifndef LIGNECOMMANDECLIENT_H
#define LIGNECOMMANDECLIENT_H

#include <QDialog>
#include "clas_ligneComdCli.h"
#include "produit.h"
#include "Commande_Cli.h"

namespace Ui {
class ligneCommandeClient;
}

class ligneCommandeClient : public QDialog
{
    Q_OBJECT
    
public:
    explicit ligneCommandeClient(QWidget *parent = 0);
    ~ligneCommandeClient();
    
private slots:
    void on_ajouterPB_clicked();

    void on_retourPB_clicked();

private:
    Ui::ligneCommandeClient *ui;
    commande_cli cmd;
    produit pr;

};

#endif // LIGNECOMMANDECLIENT_H
