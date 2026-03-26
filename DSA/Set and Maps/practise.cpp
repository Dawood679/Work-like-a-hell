#include<iostream>
using namespace std;
#include <set>
#include <map>
int main(){

    set<int>mySet;

    int A[] ={1,2,3,4,5,5};
    int B[] = {4,3,1,3,5,6};

   map<int> mapA;
   map<int>mapB;
    map<int>Finalmap;

    int countA = 1;
    for(int i = 0 ; i < 6;i++){
        if(mapA.at(A[i])){
            countA++;
        }else{
            mapA[i] = 1;
        }
    }
     int countB = 1;
    for(int i = 0 ; i < 6;i++){
        if(mapA.at(B[i])){
            countB++;
        }else{
            mapA[i] = 1;
        }
    }

    for(int i= 0;i<6;i++){
        if(mapA[A[i]]>mapB[B[i]]){
            
        }
    }
    
    // cout<<mySet<<endl;
    
    return 0 ;
}