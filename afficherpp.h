#ifndef AFFICHERPP_H
#define AFFICHERPP_H

#include <QDialog>
#include"produit_pane.h"
namespace Ui {
class afficherPP;
}

class afficherPP : public QDialog
{
    Q_OBJECT
    
public:
    explicit afficherPP(QWidget *parent = 0);
    ~afficherPP();
    
private slots:
    void on_okPB_clicked();

    void on_groupBox_clicked();

    void on_retourPB_clicked();

private:
    Ui::afficherPP *ui;
    produit_pane p;
};

#endif // AFFICHERPP_H
