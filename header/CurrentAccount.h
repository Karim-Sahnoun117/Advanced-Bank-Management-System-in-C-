#ifndef CURRENTACCOUNT_H_INCLUDED
#define CURRENTACCOUNT_H_INCLUDED
#include "../header/BankAccount.h"
using namespace std ;
class CurrentAccount : public BankAccount{

private :
    int montant_autorise ;
    string etat = "NA";
public :
CurrentAccount(){}
    CurrentAccount(string _nom,int _ID ,int _solde ,int _autorise ):BankAccount(_nom,_ID,_solde),montant_autorise(_autorise){}

    void affiche()const override ;
    void retirer(int montant )override;


};

#endif // CURRENTACCOUNT_H_INCLUDED
