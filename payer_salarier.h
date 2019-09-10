#ifndef PAYER_SALARIER_H
#define PAYER_SALARIER_H

#include <QDialog>

namespace Ui {
class payer_salarier;
}

class payer_salarier : public QDialog
{
    Q_OBJECT
    
public:
    explicit payer_salarier(QWidget *parent = 0);
    ~payer_salarier();
    
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::payer_salarier *ui;
};

#endif // PAYER_SALARIER_H
