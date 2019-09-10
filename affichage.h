#ifndef AFFICHAGE_H
#define AFFICHAGE_H

#include <QDialog>
#include "Client.h"

namespace Ui {
class affichage;
}

class affichage : public QDialog
{
    Q_OBJECT
    
public:
    explicit affichage(QWidget *parent = 0);
    ~affichage();
    
private slots:
    void on_retourPB_clicked();

private:
    Ui::affichage *ui;
   Client tm;

};

#endif // AFFICHAGE_H
