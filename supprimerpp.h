#ifndef SUPPRIMERPP_H
#define SUPPRIMERPP_H

#include <QDialog>

namespace Ui {
class supprimerPP;
}

class supprimerPP : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimerPP(QWidget *parent = 0);
    ~supprimerPP();
    
private slots:
    void on_supprimerPB_clicked();

    void on_retourPB_clicked();

private:
    Ui::supprimerPP *ui;
};

#endif // SUPPRIMERPP_H
