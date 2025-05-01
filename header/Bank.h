#ifndef BANK_H_INCLUDED
#define BANK_H_INCLUDE

#include <vector>
#include "../header/BankAccount.h"
#include "../header/CurrentAccount.h"
#include "../header/SavingsAccount.h"
#include <memory>

class Bank {
//vector<BankAccount*>tab;
vector<unique_ptr<BankAccount>>tab;
public :
Bank(){}

void ajouter_account(CurrentAccount &obj);
void ajouter_account(SavingAccount &obj);
bool supprimer_account(string name ,int ID);
void DisplayAccount();
void  state_account ();


};

#endif // BANK_H_INCLUDED
