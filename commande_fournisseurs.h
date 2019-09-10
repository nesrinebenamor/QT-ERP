#ifndef COMMANDE_FOURNISSEURS_H
#define COMMANDE_FOURNISSEURS_H

#include <QDialog>
#include"commande_four.h"
#include"class_four.h"

namespace Ui {
class commande_fournisseurs;
}

class commande_fournisseurs : public QDialog
{
    Q_OBJECT
    
public:
    explicit commande_fournisseurs(QWidget *parent = 0);
    ~commande_fournisseurs();
    
private slots:
    void on_AnnPB_clicked();

    void on_AjouterPB_clicked();

private:
    Ui::commande_fournisseurs *ui;
    commande_four com;
    class_four f;

};

#endif // COMMANDE_FOURNISSEURS_H
