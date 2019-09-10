#ifndef CONGES_H
#define CONGES_H

#include <QDialog>
#include"claaseconge.h"

namespace Ui {
class conges;
}

class conges : public QDialog
{
    Q_OBJECT
    
public:
    explicit conges(QWidget *parent = 0);
    ~conges();
    
private slots:
    void on_AnuPB_clicked();

    void on_confirmer_clicked();

private:
    Ui::conges *ui;
    claaseconge *c;
};

#endif // CONGES_H
