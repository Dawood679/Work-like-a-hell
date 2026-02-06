Day 3 – Practice & Revision

Array reverse

Find second largest

Simple matrix problems
👉 5–8 mixed questions

reverse an array 
#include<iostream>
using namespace std;


int main(){
    int arr[3] = {1,2,3};


    for(int i = 3-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }
    return 0 ;
}

Seaching in array 
#include<iostream>
using namespace std;


int main(){
    int arr[3] = {1,2,3};
    int target = 2;
    bool vlaue = false;

    for(int i = 0 ; i <3;i++){
        if(arr[i] == target){
            vlaue = true;
            cout<<"Value mil gai"<<endl;
        }
        
    }
    if(!vlaue){
        cout<<"value nhi mili";
    }


    return 0 ;
}