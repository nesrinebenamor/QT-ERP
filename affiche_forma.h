#ifndef AFFICHE_FORMA_H
#define AFFICHE_FORMA_H

#include <QDialog>
#include <qsqlquerymodel.h>


namespace Ui {
class affiche_forma;
}

class affiche_forma : public QDialog
{
    Q_OBJECT
    
public:
    explicit affiche_forma(QWidget *parent = 0);
    ~affiche_forma();
private slots:
    void on_afficheformaPB_clicked();
    void on_pushButton_clicked();

private:
    Ui::affiche_forma *ui;
    QSqlQueryModel *model;
};

#endif // AFFICHE_FORMA_H
