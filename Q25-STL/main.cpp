#include <iostream>
#include <list>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    // 1. List
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "List: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    l.pop_back();
    cout << "List after pop_back: ";
    for (int x : l)
        cout << x << " ";
    cout << endl;

    // 2. Vector
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "\nVector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    v.pop_back();
    cout << "Vector after pop_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 3. Map
    map<int, string> m;
    m[1] = "Apple";
    m[2] = "Mango";
    m[3] = "Banana";

    cout << "\nMap:" << endl;
    for (const auto& pair : m)
        cout << pair.first << " -> " << pair.second << endl;

    return 0;
}
