📘 Day 1 – Arrays Basics (Brief)
🔹 Array kya hota hai

Array same type ke data ko ek variable mein store karta hai.
Example: marks list.

🔹 Declaration & Initialization
int arr[5];              // declaration
int arr[5] = {1,2,3,4,5}; // initialization

🔹 Indexing

Array 0 se start hota hai

arr[0] → first element

arr[4] → last element

🔹 Traversal (loop se access)
for(int i=0; i<5; i++){
    cout << arr[i] << " ";
}

🔹 Basic Operations

Sum

int sum = 0;
for(int i=0; i<5; i++) sum += arr[i];


Maximum

int max = arr[0];
for(int i=1; i<5; i++)
    if(arr[i] > max) max = arr[i];


Minimum == agr hamari array mein chk karenge k agr value jo arr[i] agr bari h to us ko ham max sy replace kr denge

int min = arr[0];
for(int i=1; i<5; i++)
    if(arr[i] < min) min = arr[i];




maximum solution is this
#include <iostream>
using namespace std;



int main (){
    int arr[3] = {1,2,3};
    int max = arr[0];

    for(int i = 0; i < 3 ;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }



    cout<<max<<endl;

    
    return 0; 
}

minimum solution is this === agr hamri arr[i] ki value min sy showti hogi to ham min mein vo arr[i] value value store kr denge


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