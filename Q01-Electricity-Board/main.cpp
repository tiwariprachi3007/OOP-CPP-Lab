#include<iostream>
using namespace std;
int main(){
    string name;
    int units;
    double amount,surcharge,total;

    cout<<"Enter name:";
    getline(cin,name);

    cout<<"Enter units consumed:";
    cin>>units;

    if(units<=100)
        amount=units*0.60;

        else if(units<=300) 
        amount=100*0.60+(units-100)*0.80;

        else
        amount=100*0.60+200*0.80+(units-300)*0.90;

        //minimum charge
        if(amount<50)
        amount=50;

        //surcharge
        if(amount>300){
            surcharge=amount*0.15;
        total=amount+surcharge;       
     }
     else{
        surcharge=0;
        total=amount;
     }
     cout<<"\nName:"<< name<<endl;
     cout<<"Electricity Bill:Rs."<<amount<<endl;
     cout<<"Surcharge: Rs."<<surcharge<<endl;
     cout<<"Total Amount:Rs."<<total<<endl;
     return 0;

    }
