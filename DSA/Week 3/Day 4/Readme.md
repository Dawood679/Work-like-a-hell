#include<iostream>
using namespace std;



int main (){

    int arr[] = {1,2,3,4,5,4,6};

    for(int i = 1 ;i<7;i++ ){
        if(arr[i]>=arr[i-1]){
            cout<<"The array is sorting in Asceding order"<<endl;
        }else{
            cout<<"The array is not sorted"<<endl;
            break;
        }
    }
    return 0;
}



sorting the 00000 11111
#include<iostream>
using namespace std;



int main (){

    int arr[] = {1,1,1,0,0,0,0};

    int c0 = 0,c1 =0;
    for(int i  = 0 ;i<7;i++){
        if(arr[i] == 0){
            c0++;
        }else{
            c1++;
        }
    }


    for(int i = 0 ;i<c0;i++){
        cout<<0<<" ";
    }
    for(int i = 0 ;i<c1;i++){
        cout<<1<<" ";
    }


    

    
    return 0;
}


Reverse and array