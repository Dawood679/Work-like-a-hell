#include<iostream>
using namespace std;


int main(){


    int temp = 1;
    for(int row = 0 ; row<4 ; row++){
        
        for(int col = 0 ; col <= row; col++){
            cout<<temp++<<" ";
            
        }
        cout<<endl;
    }
    return 0 ;
}