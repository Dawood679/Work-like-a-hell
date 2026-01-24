#include<iostream>
using namespace std;


int print(int n){
    int firsttmep = n-1;
    for(int row = 0 ;row<n;row++){
        for(int space = 0 ;space<firsttmep;space++){
            cout<<" ";
        }

        for(int col = 0 ; col<=row;col++){
            cout<<"* ";
        }
        firsttmep--;

        cout<<endl;
    }

    int temp = n-1;
    for(int row = 0;row<n-1;row++){
        for(int space = 0;space<=row;space++){
            cout<<" ";
        }

        for(int col = temp;col>0;col--){
            cout<<"* ";
        }
        temp--;
        cout<<endl;
    }

    return 0;
};

int main(){
    
    print(5);
    return 0;

}