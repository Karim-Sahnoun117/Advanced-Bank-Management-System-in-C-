#include "../header/CurrentAccount.h"
#include "../header/BankAccount.h"
#include <iostream>
using namespace std ;
void CurrentAccount::affiche ()const {

cout<<"           le nom est                "<<nom <<endl;
cout<<"          l'id du compte             "<<ID<<endl;
cout<<"            le solde est             "<<solde<<endl;
cout<<"le montant autoris pour retrait est  "<<montant_autorise<<endl;


}
void CurrentAccount::retirer(int montant){

if (montant < montant_autorise)
    {
    solde -= montant ;
    montant_autorise -= montant ;
    cout<<"le retrait est fait avec succ�es"<<endl;
    cout <<"le maximum retarit valable est "<<montant_autorise<<endl;

    }
else
    {
    cout<<"impossible de faire un retrait"<<endl;
    cout<<"montant  n'est pas autoris� "<<endl;
    }

}

