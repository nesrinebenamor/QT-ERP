#ifndef PAYER_FOURN_H
#define PAYER_FOURN_H

#include <QDialog>

namespace Ui {
class payer_fourn;
}

class payer_fourn : public QDialog
{
    Q_OBJECT
    
public:
    explicit payer_fourn(QWidget *parent = 0);
    ~payer_fourn();
    
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::payer_fourn *ui;
};

#endif // PAYER_FOURN_H
