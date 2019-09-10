#ifndef MENU_H
#define MENU_H

#include <QDialog>

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT
    
public:
    explicit menu(QWidget *parent = 0);
    ~menu();
    
private slots:


   void on_rapportdetatPB_clicked();

    void on_ordredemaintenecePB_clicked();

    void on_coutdemaintenecePB_clicked();

    void on_dexonnectionPB_clicked();


    void on_produitpanne_clicked();

    void on_modifierodremaintePB_clicked();

    void on_supprimerOPB_clicked();

private:
    Ui::menu *ui;
};

#endif // MENU_H
