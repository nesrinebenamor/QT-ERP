#ifndef CLAASECONGE_H
#define CLAASECONGE_H
#include"QString"
#include <QSqlQueryModel>

class claaseconge
{
   QString CIN_Employee;
   QString date_debut;
   QString date_fin;
public:
    claaseconge(){};
    claaseconge(QString CIN_Employee , QString date_debut, QString date_fin);
    QString getCIN_Employee(){return(CIN_Employee);};
    QString getdate_debut(){return(date_debut);};
    QString getdate_fin(){return(date_fin);};
    bool ajouter_claaseconge(claaseconge *c);
    QSqlQueryModel * afficherconges();
};

#endif // CLAASECONGE_H
