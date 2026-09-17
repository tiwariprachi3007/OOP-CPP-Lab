#include <iostream>
using namespace std;

class SavingsAccount
{
private:
    double savingsBalance;
    static double annualInterestRate;

public:
    SavingsAccount(double balance)
    {
        savingsBalance = balance;
    }

    void calculateMonthlyInterest()
    {
        double interest;

        interest = savingsBalance * annualInterestRate / 12;
        savingsBalance = savingsBalance + interest;
    }

    void display()
    {
        cout << "Balance: " << savingsBalance << endl;
    }

    static void modifyInterestRate(double newRate)
    {
        annualInterestRate = newRate;
    }
};

double SavingsAccount::annualInterestRate = 0.04;

int main()
{
    SavingsAccount saver1(2000);
    SavingsAccount saver2(3000);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "After 4% interest:" << endl;
    saver1.display();
    saver2.display();

    SavingsAccount::modifyInterestRate(0.05);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();

    cout << "After 5% interest:" << endl;
    saver1.display();
    saver2.display();

    return 0;
}