#include <iostream>
#include <string>
#include <vector>
 
 using namespace std;

    int main(){

int PIN;
string WITHDRAW;
string CHECK_BALANCE;
string DEPOSIT;
string UTILITIES;
string OTHERS;
string transaction;
int amount;

          cout<<"WELCOME TO OUR BANK!"<<endl<<endl;
          cout<<"Enter your pin"<<endl;
          cin>>PIN;

          cout<<"Select Transaction your want to make:"<<endl;
          cout<<"1. Withdraw"<<endl;
          cout<<"2. Deposit"<<endl;
          cout<<"3. Check balance"<<endl;
          cout<<"4. Pay utilities"<<endl;
          cout<<"5. Others"<<endl;
            
            do
{
    if ( transaction == "" )
    {
        cout << "Enter your transaction: ";
    }
    else
    {
        cout << "Wrong transaction--try again: ";
    }
    cin >> transaction;
// }while (transaction != "WITHDRAW");
//     cout << "ENTER AMOUNT" << endl;
//     cin>>amount;
//     cout<<"processing......"<<endl;
//     cout<<"You have withdrawn:"<<amount;
}while(transaction !="DEPOSIT");
cout<<"ENTER AMOUNT"<<endl;
cin>>amount;
cout<<"deposited successifully " <<amount <<endl;
cout<<"Thank you";




return 0;
    } 