#include <iostream>
using namespace std;

class Person {
public:
    int age = 20;
};

class Student : virtual public Person {
};

class Employee : virtual public Person {
};

class Result : public Student, public Employee {
public:
    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Result r;
    r.display();
    return 0;
}
