#include <iostream>
using namespace std;

class A
{
public:
    void func(int &x)
    {
        x = x * 2;
    }
};

class B
{
public:
    void func(int &x)
    {
        x = x * 3;
    }
};

class C
{
public:
    void func(int &x)
    {
        x = x * 5;
    }
};

class D : public A, public B, public C
{
private:
    int val;

public:
    D()
    {
        val = 0;
    }

    void update_val(int new_val)
    {
        val = new_val;

        A::func(val);
        B::func(val);
        C::func(val);
    }

    void check(int new_val)
    {
        update_val(new_val);

        cout << "Value: " << val << endl;
    }
};

int main()
{
    D d;

    d.check(1);

    return 0;
}