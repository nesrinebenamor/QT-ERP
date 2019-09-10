#ifndef PP_H
#define PP_H

#include <QDialog>

namespace Ui {
class PP;
}

class PP : public QDialog
{
    Q_OBJECT
    
public:
    explicit PP(QWidget *parent = 0);
    ~PP();
    
private slots:


    void on_afficherproduitenpannePB_clicked();

    void on_ajoutproduitenpannPB_clicked();

    void on_modifierPB_clicked();

    void on_supprimerPB_clicked();

    void on_pushButton_clicked();

private:
    Ui::PP *ui;
};

#endif // PP_H
