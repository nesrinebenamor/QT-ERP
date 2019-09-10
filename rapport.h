#ifndef RAPPORT_H
#define RAPPORT_H

#include <QWidget>

namespace Ui {
class rapport;
}

class rapport : public QWidget
{
    Q_OBJECT
    
public:
    explicit rapport(QWidget *parent = 0);
    ~rapport();
    
private slots:
    void on_rechercherPB_clicked();

    void on_retourrPB_clicked();

private:
    Ui::rapport *ui;
};

#endif // RAPPORT_H
