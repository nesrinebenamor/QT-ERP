#ifndef RECHERCHE_CLIENT_H
#define RECHERCHE_CLIENT_H

#include <QDialog>
#include <QDialog>
#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include "Client.h"
#include "produit.h"

namespace Ui {
class recherche_client;
}

class recherche_client : public QDialog
{
    Q_OBJECT
    
public:
    explicit recherche_client(QWidget *parent = 0);
    ~recherche_client();
private slots:
    void on_recherchePB_clicked();

    void on_retourPB_clicked();
    
private:
    Ui::recherche_client *ui;
    Client tmp;
    produit prod;
};


#endif // RECHERCHE_CLIENT_H
