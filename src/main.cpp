#include <iostream>
#include"SavingsAccount.h"
#include "CurrentAccount.h"
#include "Bank.h"
using namespace std;

int main()
{

CurrentAccount A("karim",1234,2000,500);

A.affiche();
/*
cout<<"==========="<<endl;
A.retirer(200);
A.affiche();
cout<<"=========="<<endl;
A.deposer(700);
A.affiche();
*/
cout<<"============"<<endl;
cout<<"============"<<endl;

SavingAccount B("ahlem",1247,5,0.04);

SavingAccount E ("ibtihel",1247,5,0.04);

B.affiche();
/*
B.deposer(100);
B.retirer(700);
*/
cout<<"============="<<endl;
cout<<"============="<<endl;

Bank L ;

L.ajouter_account(A);
L.ajouter_account(B);
L.ajouter_account(E);

L.DisplayAccount();
cout<<"============"<<endl;
//L.supprimer_account("ahlem",1247);
//L.DisplayAccount();

L.state_account();
}





