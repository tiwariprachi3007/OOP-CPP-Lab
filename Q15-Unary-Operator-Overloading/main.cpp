#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    Number(int v)
    {
        value = v;
    }

    Number operator-()
    {
        return Number(-value);
    }

    Number operator++()
    {
        ++value;
        return *this;
    }

    Number operator++(int)
    {
        Number temp = *this;
        value++;
        return temp;
    }

    Number operator--()
    {
        --value;
        return *this;
    }

    Number operator--(int)
    {
        Number temp = *this;
        value--;
        return temp;
    }

    void display()
    {
        cout << value << endl;
    }
};

int main()
{
    Number n(10);

    cout << "Original: ";
    n.display();

    Number a = -n;
    cout << "Unary -: ";
    a.display();

    ++n;
    cout << "Pre-increment: ";
    n.display();

    n++;
    cout << "Post-increment: ";
    n.display();

    --n;
    cout << "Pre-decrement: ";
    n.display();

    n--;
    cout << "Post-decrement: ";
    n.display();

    return 0;
}