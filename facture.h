#ifndef FACTURE_H
#define FACTURE_H
#include<QString>
#include<QSqlQueryModel>

class Facture
{
public:
    Facture();
    Facture(int,QString,QString,QString,float,float,float);
    int getid_facture();
    QString getnom_facture();
    QString getprenom_facture();
    QString getdate_facture();
     float getprix_produit();
     float getprix_projet();
     float getmontant_total();


     void setid_facture(int);
     void setnom_facture(QString);
     void setprenom_facture(QString);
     void setdate_facture(QString);
     void setprix_produit(float);
     void setprix_projet(float);
     void setmontant_total(float);

     bool ajouter();
     QSqlQueryModel* afficher();
     bool supprimer(int);
     bool modifier(int,QString,QString,QString,float,float,float);



private:
  int id_facture;
  QString nom_facture,prenom_facture,date_facture;
  float  prix_produit,prix_projet,montant_total;

};


#endif // FACTURE_H
