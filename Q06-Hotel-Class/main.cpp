#include<iostream>
using namespace std;

class Hotel{
    private:
    int Rno;
    string name;
    float Tariff;
    int NOD;

    float calc(){
        float amount=NOD*Tariff;
        if(amount>1000){
            amount=amount*1.05;
        }
        return amount;
    }
        public:
        void Checkin(){
            cout<<"Enter Room No.:";
            cin>>Rno;

            cout<<"Enter Name:";
            cin>>name;

            cout<<"Enter Tarrif:";
            cin>>Tariff;

            cout<<"Enter Number of Days:";
            cin>>NOD;

        }
        void checkout(){
            cout<<"\nTotal Bill =Rs."<<calc()<<endl;
        }
    };
    int main(){
        Hotel h;
        h.Checkin();
        h.checkout();
        return 0;
    }
