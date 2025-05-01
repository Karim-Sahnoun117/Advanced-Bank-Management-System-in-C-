#include"../header/SavingsAccount.h"

#include <iostream>

void SavingAccount :: affiche()const{


cout<<"           le nom est       "<<nom <<endl;
cout<<"          l'id du compte    "<<ID<<endl;
cout<<"            le solde est    "<<solde<<endl;
cout<<"le taux d'interet est egale "<<tauxinteret<<endl;


}
void  SavingAccount :: retirer(int montant){

if ((solde  - montant )<= seuil )
{
    cout<<"impossible de faire le retrait "<<endl;

}
else
{
   cout<<"le retrait est fais avec succ�s "<<endl;
   solde -= montant ;
   cout<<"votre solde est egale "<<solde<<endl;

}
}
void SavingAccount ::applique_interet(){

solde += solde*tauxinteret;
cout<<"le nouveau solde devient"<<solde<<endl;

}

