✅ Day 1 — Basics of Strings in C++
Topics

string kya hoti hai

char array vs string

Input / Output

String length

Concepts
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Dawood";
    cout << s.length();
}

Learn

string s;

cin >> s

getline(cin, s)

s.length() / s.size()

Practice

User se name input lo aur print karo.

String ki length print karo.

First aur last character print karo.


solution is this 
#include<iostream>
#include<string>
using namespace std;



int main(){
    string name;

    cout<<"Enter your name: "<<" ";
    getline(cin,name);

    cout<<name<<endl;

    cout<<"Variable name length: "<<name.length()<<endl;
    cout<<"Variable name size: "<<name.size()<<endl;



    if(name.length()>0){
        cout<<"First element is this: "<<name[0]<<endl;

        cout<<"last element is this: "<<name[name.length()-1]<<endl;
    }


    return 0;
}