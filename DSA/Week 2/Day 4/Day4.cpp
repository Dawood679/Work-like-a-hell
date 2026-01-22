#include<iostream>
using namespace std;



int main (){
    int temp = 4;
    for(int row = 0 ; row <4;row++){
        for(int space = 0; space<row;space++){
            cout<<" ";
        }

        //starts
        for(int col = 0; col <temp;col++){
            cout<<"* ";
            

        }
        temp--;

        cout<<endl;
    }
    return 0;
}