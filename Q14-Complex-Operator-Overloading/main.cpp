#include <iostream>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    Complex operator+(Complex c)
    {
        return Complex(real + c.real, img + c.img);
    }

    Complex operator-(Complex c)
    {
        return Complex(real - c.real, img - c.img);
    }

    bool operator==(Complex c)
    {
        return (real == c.real && img == c.img);
    }

    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    Complex c1(5, 3);
    Complex c2(2, 1);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;

    cout << "Addition: ";
    c3.display();

    cout << "Subtraction: ";
    c4.display();

    if (c1 == c2)
        cout << "Both are equal" << endl;
    else
        cout << "Both are not equal" << endl;

    return 0;
}