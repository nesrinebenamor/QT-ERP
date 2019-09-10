#ifndef SUPPRIMERORDRE_H
#define SUPPRIMERORDRE_H

#include <QDialog>

namespace Ui {
class supprimerOrdre;
}

class supprimerOrdre : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimerOrdre(QWidget *parent = 0);
    ~supprimerOrdre();
    
private slots:
    void on_supprimerPB_clicked();

    void on_retour_clicked();

private:
    Ui::supprimerOrdre *ui;
};

#endif // SUPPRIMERORDRE_H
