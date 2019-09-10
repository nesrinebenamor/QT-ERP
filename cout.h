#ifndef COUT_H
#define COUT_H

#include <QDialog>

namespace Ui {
class cout;
}

class cout : public QDialog
{
    Q_OBJECT
    
public:
    explicit cout(QWidget *parent = 0);
    ~cout();
    
private slots:
    void on_okPB_clicked();

    void on_enregistrerPB_clicked();

private:
    Ui::cout *ui;
};

#endif // COUT_H
