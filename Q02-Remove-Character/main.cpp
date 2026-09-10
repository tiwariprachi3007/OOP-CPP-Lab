#include<iostream>
using namespace std;
int main(){
    string str;
    char ch;

    cout<<"enter a string:";
    getline(cin,str);

    cout<<"enter a character to remove:";
    cin>>ch;

    for(int i=0;i<str.length();i++){
        if(str[i]!=ch)
        cout<<str[i];

    }
    return 0;
}