#ifndef ARTICLEHORSSTOCK_H
#define ARTICLEHORSSTOCK_H

#include <QDialog>
#include"produit.h"

namespace Ui {
class ArticleHorsStock;
}

class ArticleHorsStock : public QDialog
{
    Q_OBJECT
    
public:
    explicit ArticleHorsStock(QWidget *parent = 0);
    ~ArticleHorsStock();
    
private slots:
    void on_retPB_clicked();

private:
    Ui::ArticleHorsStock *ui;
    produit pro;
};

#endif // ARTICLEHORSSTOCK_H
