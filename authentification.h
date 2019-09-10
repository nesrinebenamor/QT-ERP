#ifndef AUTHENTIFICATION_H
#define AUTHENTIFICATION_H

#include <QMainWindow>
#include"utilisateur.h"
#include"gestion_stock.h"
#include"gestion_vente.h"
#include "menu.h"
#include"menu_grh.h"
#include"menu_finance.h"

namespace Ui {
class Authentification;
}

class Authentification : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Authentification(QWidget *parent = 0);
    ~Authentification();
    
private slots:
    void on_cnxPB_clicked();

private:
    Ui::Authentification *ui;
};

#endif // AUTHENTIFICATION_H
