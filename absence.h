#ifndef ABSENCE_H
#define ABSENCE_H

#include"QString"
#include "QSqlQueryModel"


class absence
{

protected:

    QString CIN_Employee;
    QString cause;
    QString justifie;


public:
    absence(){};
    absence( QString cin_employee,QString cause,QString justifie );
    QString getCin_employee(){return CIN_Employee;};
    QString getCause(){return cause;} ;
    QString getJustifie(){return justifie;} ;

    bool ajoutAbsence(absence *A);

    virtual QSqlQueryModel *afficherAbsence();
    QSqlQueryModel * rechercherAbsence(QString CIN_Employee);
    bool supprimerAbsence(QString CIN_Employee);


};
#endif // ABSENCE_H
