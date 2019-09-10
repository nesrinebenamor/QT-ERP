#ifndef MODIFICATION_H
#define MODIFICATION_H

#include <QDialog>
#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include "QSqlQueryModel"
#include <QtSql>
#include "produit.h"


namespace Ui {
class modification;
}

class modification : public QDialog
{
    Q_OBJECT
    
public:
    explicit modification(QWidget *parent = 0);
    ~modification();
    
private slots:
    void on_modpB_clicked();

    void on_pushButton_clicked();

private:
    Ui::modification *ui;
    produit prod;
};

#endif // MODIFICATION_H
