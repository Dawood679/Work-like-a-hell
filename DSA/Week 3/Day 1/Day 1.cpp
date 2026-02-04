#include <iostream>
using namespace std;



int main (){
    int arr[4] = {1,2,3,0};
    int min = arr[0];

    for(int i = 0; i < 4 ;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }



    cout<<min<<endl;

    
    return 0; 
}