#ifndef AJOUT_FORMA_H
#define AJOUT_FORMA_H

#include <QDialog>
#include"formation.h"
#include<QSqlRecord>


namespace Ui {
class ajout_forma;
}

class ajout_forma : public QDialog
{
    Q_OBJECT
    
public:
    explicit ajout_forma(QWidget *parent = 0);
    ~ajout_forma();
    
private:
    Ui::ajout_forma *ui;

private slots:
void on_ajouterformaPB_clicked();
void on_pushButton_clicked();
};

#endif // AJOUT_FORMA_H
