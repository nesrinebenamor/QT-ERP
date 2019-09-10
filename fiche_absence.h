#ifndef FICHE_ABSENCE_H
#define FICHE_ABSENCE_H

#include <QDialog>
#include<qsqlquerymodel.h>
#include <QStandardItemModel>
#include"QSqlQuery"
#include"absence.h"

namespace Ui {
class fiche_absence;
}

class fiche_absence : public QDialog
{
    Q_OBJECT
    
public:
    explicit fiche_absence(QWidget *parent = 0);
    ~fiche_absence();
    
private slots:
    void on_ajouterabs_clicked();

    void on_justifieRB_clicked();

    void on_nonjustifieRB_clicked();


    void on_afficherabs_clicked();

    void on_supprimerabs_clicked();

    void on_OKpB_clicked();

    void on_AnnulerpB_clicked();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_retoursup_clicked();

private:
    Ui::fiche_absence *ui;
    QSqlQueryModel *model;
    absence abs;
};

#endif // FICHE_ABSENCE_H
