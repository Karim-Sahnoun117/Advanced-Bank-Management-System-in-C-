#include"Bank.h"
#include"BankAccount.h"
#include<iostream>
#include<algorithm>

using namespace std ;
void Bank::ajouter_account(CurrentAccount & obj)
{

    //tab.push_back(new CurrentAccount(obj));
      tab.push_back (make_unique <CurrentAccount>());
}
void Bank::ajouter_account(SavingAccount & obj )
{
    //tab.push_back(new SavingAccount(obj));
   tab.push_back (make_unique <SavingAccount>());
}
void Bank::DisplayAccount(){

for (auto it = tab.begin();it != tab.end();++it)

{
    (*it) -> affiche();
}

}

bool Bank::supprimer_account(string name ,int id)
{
    for(auto it =tab.begin();it!=tab.end();++it)
    {
        if ((*it)->getNom() == name && (*it)->getID() == id)
        {
            tab.erase(it);
            cout<<"le compte a ete supprimé avec succes "<<endl;
            return true ;
        }


    }
     cout<<"le compte n'est pas trouvé"<<endl;
     return false ;

}

void  Bank :: state_account()
{ int nb = 0 ;
  for (auto it = tab.begin();it != tab.end();++it )
  {

     SavingAccount * p = dynamic_cast<SavingAccount *>(it->get());
     if (p)
     {
        cout <<"le type correspond pour la case  case " <<nb <<endl;
     }
     else
        cout<<"cela ne correspond pas a la case " <<nb <<endl;

 nb ++ ;
  }

}





