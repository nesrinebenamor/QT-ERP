#ifndef COMMANDE_CLIENT_H
#define COMMANDE_CLIENT_H

#include <QDialog>
#include "Commande_Cli.h"



namespace Ui {
class Commande_Client;
}

class Commande_Client : public QDialog
{
    Q_OBJECT
    
public:
    explicit Commande_Client(QWidget *parent = 0);
    ~Commande_Client();
    
private slots:
    void on_AjouterPB_clicked();

    void on_suivantPB_clicked();

    void on_pushButton_clicked();

private:
    Ui::Commande_Client *ui;
    commande_cli com;


};

#endif // COMMANDE_CLIENT_H
