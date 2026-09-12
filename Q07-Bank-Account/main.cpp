#include<iostream>
using namespace std;

class BankAccount{
    private:
    string name;
    int accountNo;
    string accountType;
    float balance;

    public:
    void assignInitial(){
        cout<<"Enter Name:";
        cin>>name;

        cout<<"Enter Account Number:";
        cin>>accountNo;

        cout<<"Enter account type:";
        cin>>accountType;

        cout<<"Enter initial balance:";
        cin>>balance;

    }
    void deposit(){
        double amount;
        cout<<"Enter amount to be deposited:";
        cin>>amount;
        balance += amount;
    }
    void withdraw(){
        double amount;
        cout<<"Enter amount to be withdraw:";
        cin>>amount;

        if(amount<=balance)
        balance=balance-amount;

        else
        cout<<"Insufficient Balance!"<<endl;
    }

    void display(){
        cout<<"\nName:"<<name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }
};

int main(){
    BankAccount b;
    b.assignInitial();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
