#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED
#include<string>
using namespace std ;

class BankAccount {

protected :
    string nom ;
    int ID ;
    int solde ;
public :


BankAccount(string _nom,int _ID,int _solde):nom(_nom),ID(_ID),solde(_solde){}
virtual void affiche()const =0 ;
virtual void deposer (int montant);
virtual void retirer (int retirer)=0;
virtual string getNom(){return nom ;}
virtual int getID(){return ID ;}
BankAccount(){}
virtual ~BankAccount(){}
};

#endif // BANKACCOUNT_H_INCLUDED
