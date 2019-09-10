#ifndef GESTION_STOCK_H
#define GESTION_STOCK_H

#include <QDialog>

namespace Ui {
class gestion_stock;
}

class gestion_stock : public QDialog
{
    Q_OBJECT
    
public:
    explicit gestion_stock(QWidget *parent = 0);
    ~gestion_stock();

private slots:

    void on_QuiPb_clicked();


    void on_Gestion_ArticlespB_clicked();

    void on_LivrPB_clicked();

    void on_CommandePB_clicked();

    void on_FourPB_clicked();

private:
    Ui::gestion_stock *ui;
};

#endif // GESTION_STOCK_H
