#ifndef SUPPRIMERFORMA_H
#define SUPPRIMERFORMA_H

#include <QDialog>

namespace Ui {
class supprimerforma;
}

class supprimerforma : public QDialog
{
    Q_OBJECT
    
public:
    explicit supprimerforma(QWidget *parent = 0);
    ~supprimerforma();
private slots:
    void on_supprimerPB_clicked();

    void on_retourPB_clicked();

private:
    Ui::supprimerforma *ui;
};

#endif // SUPPRIMERFORMA_H
