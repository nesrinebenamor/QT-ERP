#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui/QApplication>
#include"QString"
#include "connection.h"
#include"produit.h"
#include "QSqlQueryModel"
#include <QtSql>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_AnnpB_clicked();

    void on_ValpB_clicked();

private:
    Ui::Dialog *ui;
    produit pro;
};

#endif // DIALOG_H
