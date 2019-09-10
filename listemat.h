#ifndef LISTEMAT_H
#define LISTEMAT_H

#include <QDialog>
#include<QSqlRecord>
#include"produit.h"
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include "QSqlQueryModel"

namespace Ui {
class ListeMat;
}

class ListeMat : public QDialog
{
    Q_OBJECT
    
public:
    explicit ListeMat(QWidget *parent = 0);
    ~ListeMat();
    
private slots:

    void on_AjouterpB_clicked();

    void on_fermerpB_clicked();

    void on_SuppB_clicked();


private:
    Ui::ListeMat *ui;
    produit prod;
};

#endif // LISTEMAT_H
