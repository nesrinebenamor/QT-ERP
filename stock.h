#ifndef STOCK_H
#define STOCK_H

#include <QDialog>
#include"produit.h"

namespace Ui {
class Stock;
}

class Stock : public QDialog
{
    Q_OBJECT
    
public:
    explicit Stock(QWidget *parent = 0);
    ~Stock();
    
private slots:
    void on_retPB_clicked();

private:
    Ui::Stock *ui;
    produit prod;
};

#endif // STOCK_H
