#ifndef AFFICHCOMMANDE_H
#define AFFICHCOMMANDE_H

#include <QDialog>
#include"class_lignecommandefou.h"

namespace Ui {
class affichCommande;
}

class affichCommande : public QDialog
{
    Q_OBJECT
    
public:
    explicit affichCommande(QWidget *parent = 0);
    ~affichCommande();
    
private slots:
    void on_RetPB_clicked();

private:
    Ui::affichCommande *ui;
    class_ligneCommandeFou lgcf;
};

#endif // AFFICHCOMMANDE_H
