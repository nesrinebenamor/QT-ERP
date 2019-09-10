#include "rapportetat.h"

rapportetat::rapportetat(QString ref_prod)
{
     this->ref_prod=ref_prod;
}


    int rapportetat :: rechercherRapport( rapportetat * rap)
    {
        QSqlQuery qry;
        int count;
        QString str="select * from Produit_Panne p inner join Ordre o on (p.Id_Prod_Pan=o.ref_prod";
        if(qry.exec(str))
        {
            count=0;
            while(qry.next())
           {
              count++;
           }
        }
        return(count);
    }

