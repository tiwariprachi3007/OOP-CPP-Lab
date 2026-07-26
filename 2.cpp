#include<iostream>
#include<string>
using namespace std;

string removeChar(string str,char ch){
    string result="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=ch){
            result +=str[i];
        }
    }
    return result; 

}

int main(){
    string input;
    char ch;

    cout << "enter a string:";
    getline(cin,input);

    cout << "enter the character to remove:";
    cin >>ch;

    string updated =removeChar(input ,ch);
    cout<< "updated string:" << updated << endl;

    return 0;
}