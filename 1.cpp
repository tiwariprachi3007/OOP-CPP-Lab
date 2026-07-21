#include<iostream>
#include<string>
using namespace std;

int main(){
    string name;
    int units;
    double amount;

    cout << "Enter the name of the user: ";
    getline(cin, name);

    cout << "Enter the number of units consumed: ";
    cin >> units;

    // Step 1: Calculate base amount
    if(units <= 100){
        amount = units * 0.60;
    } else if(units <= 300){
        amount = 100 * 0.60 + (units - 100) * 0.80;
    } else {
        amount = 100 * 0.60 + 200 * 0.80 + (units - 300) * 0.90;
    }

    // Step 2: Apply minimum charge
    if(amount < 50){
        amount = 50;
    }

    // Step 3: Apply surcharge if bill > 300
    if(amount > 300){
        amount = amount + (amount * 0.15);
    }

    // Step 4: Always display result
    cout << "User: " << name << endl;
    cout << "Total amount: Rs " << amount << endl;

    return 0;
}
