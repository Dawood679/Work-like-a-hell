#include<iostream>
using namespace std;
#include <set>
#include <map>
int main(){

    set<int>mySet;
    // sum of tow first pair 

    int arr[] = {1,7,6,5,2,9,11,6,5};
    int target = 11;

    for(int i = 0 ; i < 8;i++){
        int req = target - arr[i];
        if(mySet.find(req) != mySet.end()){
            cout<<"Pair mil gaya";

        }
        mySet.insert(arr[i]);

    }
    
    // cout<<mySet<<endl;
    
    return 0 ;
}