#include <iostream>
using namespace std;

class Base
{
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;

    Base()
    {
        privateData = 10;
        protectedData = 20;
        publicData = 30;
    }

    void display()
    {
        cout << "Private: " << privateData << endl;
        cout << "Protected: " << protectedData << endl;
        cout << "Public: " << publicData << endl;
    }
};

class PublicDerived : public Base
{
public:
    void show()
    {
        // privateData cannot be accessed here
        cout << "Protected: " << protectedData << endl;
        cout << "Public: " << publicData << endl;
    }
};

class ProtectedDerived : protected Base
{
public:
    void show()
    {
        cout << "Protected: " << protectedData << endl;
        cout << "Public: " << publicData << endl;
    }
};

class PrivateDerived : private Base
{
public:
    void show()
    {
        cout << "Protected: " << protectedData << endl;
        cout << "Public: " << publicData << endl;
    }
};

int main()
{
    Base b;
    cout << "Base class:" << endl;
    b.display();

    PublicDerived obj1;
    cout << "\nPublic Inheritance:" << endl;
    obj1.show();

    ProtectedDerived obj2;
    cout << "\nProtected Inheritance:" << endl;
    obj2.show();

    PrivateDerived obj3;
    cout << "\nPrivate Inheritance:" << endl;
    obj3.show();

    return 0;
}