#include <iostream>
using namespace std;

class Student
{
protected:
    string studentName;
    int rollNo;

public:
    void getStudentData()
    {
        cout << "Enter Student Name: ";
        cin >> studentName;

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        cout << "Student Name: " << studentName << endl;
        cout << "Roll No: " << rollNo << endl;
    }
};

class Faculty
{
protected:
    string facultyName;
    string subject;

public:
    void getFacultyData()
    {
        cout << "Enter Faculty Name: ";
        cin >> facultyName;

        cout << "Enter Subject: ";
        cin >> subject;
    }

    void displayFaculty()
    {
        cout << "Faculty Name: " << facultyName << endl;
        cout << "Subject: " << subject << endl;
    }
};

class Person : public Student, public Faculty
{
public:
    void display()
    {
        displayStudent();
        displayFaculty();
    }
};

int main()
{
    Person p;

    p.getStudentData();
    p.getFacultyData();

    cout << "\nDetails:" << endl;
    p.display();

    return 0;
}