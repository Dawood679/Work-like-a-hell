set and maps 

find the frequency of the element in the array 
#include<iostream>
using namespace std;


int main(){


    int arr[] = {1,1,2,3,1,2,5,4};
    for(int i = 0;i < 8;i++){
        int count = 1;
        if(arr[i]==-1){
            continue;
        }
        for(int j =i+1;j<8;j++){
            if(arr[i]==arr[j]){
                count++;
                arr[j] = -1;
            }
        }
        cout<<"arr of this : "<< arr[i]<<" "<<count<<endl;
    }
    return 0 ;
}   



find the disticet element size 
#include<iostream>
using namespace std;
#include <set>

int main(){

    set<int>mySet;

    int arr[] ={1,2,3,4,5,5};
    
    for(int i = 0 ; i < 6;i++){
        mySet.insert(arr[i]);
    }

    cout<<mySet.size();
    
    return 0 ;
}


union of two array 
#include<iostream>
using namespace std;
#include <set>

int main(){

    set<int>mySet;

    int A[] ={1,2,3,4,5,5};
    int B[] = {4,3,1,3,5,6};

    for(int i =0 ; i < 6;i++){
        mySet.insert(A[i]);
    }

     for(int i =0 ; i < 6;i++){
        mySet.insert(B[i]);
    }

    for (int num : mySet) {
        std::cout << num << " ";
    }
    
    // cout<<mySet<<endl;
    
    return 0 ;
}