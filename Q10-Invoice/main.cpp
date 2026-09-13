#include <iostream>
using namespace std;

class Invoice
{
private:
    string partNumber;
    string partDescription;
    int quantity;
    double price;

public:

    Invoice(string p, string d, int q, double pr)
    {
        partNumber = p;
        partDescription = d;

        if (q > 0)
            quantity = q;
        else
            quantity = 0;

        if (pr > 0)
            price = pr;
        else
            price = 0;
    }

    void setQuantity(int q)
    {
        quantity = q;
    }

    void setPrice(double p)
    {
        price = p;
    }

    int getQuantity()
    {
        return quantity;
    }

    double getPrice()
    {
        return price;
    }

    double getInvoiceAmount()
    {
        return quantity * price;
    }
};

int main()
{
    Invoice obj("P101", "Keyboard", 2, 500);

    cout << "Quantity: " << obj.getQuantity() << endl;
    cout << "Price: " << obj.getPrice() << endl;
    cout << "Invoice Amount: Rs. "
         << obj.getInvoiceAmount() << endl;

    return 0;
}