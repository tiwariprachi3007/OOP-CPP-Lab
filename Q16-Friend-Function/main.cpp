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

    friend Number operator-(Number n);
    friend Number operator++(Number &n);
    friend Number operator++(Number &n, int);
    friend Number operator--(Number &n);
    friend Number operator--(Number &n, int);

    void display()
    {
        cout << value << endl;
    }
};

Number operator-(Number n)
{
    return Number(-n.value);
}

Number operator++(Number &n)
{
    ++n.value;
    return n;
}

Number operator++(Number &n, int)
{
    Number temp = n;
    n.value++;
    return temp;
}

Number operator--(Number &n)
{
    --n.value;
    return n;
}

Number operator--(Number &n, int)
{
    Number temp = n;
    n.value--;
    return temp;
}

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