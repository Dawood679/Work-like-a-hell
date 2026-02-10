#include<iostream>
using namespace std;


int main (){

    int a[2][3] = {{1,2,3},{4,5,6}};


    for(int col = 0 ; col < 3; col++){
        for(int row = 0; row <2;row++){
            cout<<a[col][row]<<" ";
        }
    }


    return 0;
}