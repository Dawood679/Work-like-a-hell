find the missing nbr 
#include<iostream>
using namespace std;

like 2,1,9,1,2,3,9
is mein nbr duplicate hn or jo aik bar aya hn us ko find krna hn 

int main(){

    int arr[] = {2,1,9,1,2,3,9};

    for(int i = 0 ; i <7;i++){
        int target = arr[i];
        int count = 0;

        for(int j = 0 ; j< 7;j++){
            if(arr[j]==target){
                count++;
            }
        }
        if(count == 1){
            cout<<target<<endl;
            break;
        }
    }

    return 0;
}