#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "graphic era university";

    cout << "Non-repeating characters: ";

    for (int i = 0; i < str.length(); i++) {
        int count = 0;

        if (str[i] == ' ')
            continue;

        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count == 1)
            cout << str[i] << " ";
    }

    return 0;
}