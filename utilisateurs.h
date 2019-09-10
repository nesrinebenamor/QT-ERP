#ifndef UTILISATEURS_H
#define UTILISATEURS_H

#include <QDialog>

namespace Ui {
class utilisateurs;
}

class utilisateurs : public QDialog
{
    Q_OBJECT
    
public:
    explicit utilisateurs(QWidget *parent = 0);
    ~utilisateurs();
    
private slots:
    void on_OKa_clicked();

    void on_retourRP_clicked();

private:
    Ui::utilisateurs *ui;
};

#endif // UTILISATEURS_H
