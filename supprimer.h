#ifndef SUPPRIMER_H
#define SUPPRIMER_H

#include <QDialog>
#include <QMainWindow>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>
#include "Client.h"



namespace Ui {
class supprimer;
}

class supprimer : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimer(QWidget *parent = 0);
    ~supprimer();
    
private slots:
    void on_SupprimerPB_clicked();

    void on_retourPB_clicked();

private:
    Ui::supprimer *ui;
    Client tmp;
};

#endif // SUPPRIMER_H
