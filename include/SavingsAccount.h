#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED

#include"BankAccount.h"
#include<mysql.h>
class SavingAccount : public BankAccount {

private :
    double tauxinteret ;
    int seuil ;
public :


 SavingAccount(string _nom, int _ID , int _solde ,double _tauxinteret  ):BankAccount(_nom,_ID,_solde),tauxinteret(_tauxinteret),seuil(10){}
SavingAccount(){}
void affiche()const override ;
void retirer (int retirer)override ;
void applique_interet();
void insertSavingAccount(MYSQL *conn);


};

#endif // SAVINGSACCOUNT_H_INCLUDED
