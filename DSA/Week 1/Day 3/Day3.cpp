#include<iostream>
using namespace std;


int main (){
    int choice;
    cout<<"Enter the number for your Choice"<<endl;
    cin >>choice;

    switch(choice){
        case 1:
            cout<<"You select a Tea";
            break;
        case 2:
            cout<<"You select a pizzs";
            break;
        default:
            cout<<"You select invalid things";
            
    }
}