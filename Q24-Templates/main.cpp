#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyList {
    T arr[100];
    int size;

public:
    MyList() {
        size = 0;
    }

    void insert(T value) {
        if (size >= 100) {
            cout << "List is full" << endl;
            return;
        }
        arr[size] = value;
        size++;
    }

    void remove(int pos) {
        if (pos < 0 || pos >= size) {
            cout << "Invalid position" << endl;
            return;
        }

        for (int i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;
    }

    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Demonstrating template with integer
    MyList<int> intList;
    intList.insert(10);
    intList.insert(20);
    intList.insert(30);

    cout << "Integer List: ";
    intList.display();

    intList.remove(1);
    cout << "After deleting at index 1: ";
    intList.display();

    // Demonstrating template with string
    MyList<string> strList;
    strList.insert("Hello");
    strList.insert("OOP");
    strList.insert("C++");

    cout << "\nString List: ";
    strList.display();

    strList.remove(0);
    cout << "After deleting at index 0: ";
    strList.display();

    return 0;
}
