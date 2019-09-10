#ifndef AFFICHAGECOMMANDE_H
#define AFFICHAGECOMMANDE_H

#include <QDialog>
#include "clas_ligneComdCli.h"

namespace Ui {
class affichageCommande;
}

class affichageCommande : public QDialog
{
    Q_OBJECT
    
public:
    explicit affichageCommande(QWidget *parent = 0);
    ~affichageCommande();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::affichageCommande *ui;
    clas_ligneComdCli lcomc;

};

#endif // AFFICHAGECOMMANDE_H
