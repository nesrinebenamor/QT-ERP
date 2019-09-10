#ifndef GESTION_VENTE_H
#define GESTION_VENTE_H

#include <QDialog>

namespace Ui {
class gestion_vente;
}

class gestion_vente : public QDialog
{
    Q_OBJECT
    
public:
    explicit gestion_vente(QWidget *parent = 0);
    ~gestion_vente();
    
private slots:
    void on_ajoutPB_clicked();

    void on_rechPB_clicked();

    void on_consulterPB_clicked();

    void on_suppPB_clicked();

    void on_VentePB_clicked();

    void on_quitePB_clicked();

private:
    Ui::gestion_vente *ui;
};

#endif // GESTION_VENTE_H
