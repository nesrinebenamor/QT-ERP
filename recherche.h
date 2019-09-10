#ifndef RECHERCHE_H
#define RECHERCHE_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include<QSqlRecord>
#include "QSqlQueryModel"
#include"produit.h"

namespace Ui {
class recherche;
}

class recherche : public QDialog
{
    Q_OBJECT
    
public:
    explicit recherche(QWidget *parent = 0);
    ~recherche();
    
private slots:
    void on_OKpB_clicked();

    void on_AnnulerpB_clicked();

private:
    Ui::recherche *ui;
    produit prod;
};

#endif // RECHERCHE_H
