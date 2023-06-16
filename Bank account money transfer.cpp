//Bank money transfer using class and objects, friend function

#include <iostream>
#include <string.h>

using namespace std;

class bank
{
 public:
 string name;
 int balance;
 int acct;
 bank(string name,int balance,int acct){
    this->name=name;
    this->balance=balance;
    this->acct=acct;
 }
 
 friend void transfermoney(bank& o1,bank& o2);
};

void transfermoney(bank& o1,bank& o2)
{
    cout<<"Enter the amount to be transferred: "<<endl;
    int transfer;
    cin>>transfer;
    if(transfer<=o1.balance)
    {
        o1.balance-=transfer;
        o2.balance+=transfer;
        cout<<"Transaction succesful amount transferred: "<<transfer<<endl;
        cout<<"Reciever's details"<<endl;
        cout<<o2.name<<'\n'<<o2.balance<<'\n'<<o2.acct<<endl;
    }
    else
    {
        cout<<"Insufficient balance"<<endl;
    }
}

int main()
{
    
    string n1,n2;
    int bal1,bal2;
    int transfer;
    int acct1,acct2;
    cout<<"Enter sender's details: "<<endl;
    cin>>n1;
    cin>>bal1>>acct1;
    bank A(n1,bal1,acct1);
    cout<<"Enter reciever's details: "<<endl;
    cin>>n2;
    cin>>bal2>>acct2;
    bank B(n2,bal2,acct2);
    transfermoney(A,B);
    
    return 0;
}
