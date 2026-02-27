Searching 
to look something and to find something 


Linear searching 
seacrhig the element one by one 


Binanry search 
sorted data 

#include<iostream>
using namespace std;


int main (){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int l = 0;
    int r = 8;
    int target = 7;

    while(l<=r){
        int mid = (l +r)/2;

        if(arr[mid]==target){
            cout<<"target is found"<<mid<<endl;
            break;
        }else if(arr[mid]>target){
            r  = mid -1;
        }else{
            l = mid +1;
        }
    }
    return 0 ; 
}



sorting 
to re-arrange the data in specific order it can be asceding or descending 
Har iteration mein array ka smallest element dhundo aur usay correct position par rakh do.

Selection Sort Working (Step-by-Step)

Example array:

[64, 25, 12, 22, 11]
✅ Step 1

Smallest element = 11
Swap with first element

[11, 25, 12, 22, 64]
✅ Step 2

Remaining array = [25, 12, 22, 64]
Smallest = 12
Swap with 25

[11, 12, 25, 22, 64]
✅ Step 3

Remaining = [25, 22, 64]
Smallest = 22

[11, 12, 22, 25, 64]
✅ Step 4

Remaining = [25, 64]
Smallest = 25 (already correct)

[11, 12, 22, 25, 64]

👉 Array sorted 🎉

🔹 JavaScript Code (Selection Sort)
function selectionSort(arr) {
  let n = arr.length;

  for (let i = 0; i < n - 1; i++) {
    let minIndex = i;

    for (let j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }

    // swap
    if (minIndex !== i) {
      [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
    }
  }

  return arr;
}

console.log(selectionSort([64, 25, 12, 22, 11]));
🔹 Time Complexity
Case	Complexity
Best	O(n²)
Average	O(n²)
Worst	O(n²)

👉 Selection sort mein comparisons fix hoti hain is liye best case bhi O(n²)

🔹 Key Points (Interview Tips)

✅ In-place sorting (extra memory nahi lagti)
✅ Simple logic
❌ Large datasets ke liye slow
✅ Minimum swaps (Bubble sort se kam swaps)

🔥 Real Life Analogy

Jaise tum cards arrange kar rahe ho:
Har baar sab se chota card dhundo aur usay left side rakh do.

👉 Practice Question

Sort karo selection sort se:

[29, 10, 14, 37, 13]




solution 
#include<iostream>
using namespace std;


int main (){
    int arr[] = {2,4,2,1,4,6,9,0};

    for(int i = 0 ; i < 8;i++){
        int min = arr[i];
        int loc = i;

        for(int j = i ; j < 8;j++){
            if(arr[j]<min){
                min = arr[j];
                loc = j;
            }
        }
        swap(arr[i],arr[loc]);
    }
    
    for(int i = 0 ; i < 8;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0 ; 
}

selection sorting 
#include<iostream>
using namespace std;


int main (){
    int arr[] = {2,4,2,1,4,6,9,0};

    for(int i = 0 ; i < 8;i++){
        int min = arr[i];
        int loc = i;

        for(int j = i ; j < 8;j++){
            if(arr[j]<min){
                min = arr[j];
                loc = j;#include<iostream>
using namespace std;


int main (){
    int arr[] = {2,4,2,1,4,6,9,0};

    for(int i = 0 ; i < 8;i++){
        int min = arr[i];
        int loc = i;

        for(int j = i ; j < 8;j++){
            if(arr[j]<min){
                min = arr[j];
                loc = j;
            }
        }
        swap(arr[i],arr[loc]);
    }
    
    for(int i = 0 ; i < 8;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0 ; 
}
            }
        }
        swap(arr[i],arr[loc]);
    }
    
    for(int i = 0 ; i < 8;i++){
        cout<<arr[i]<<" ";
    }

    
    return 0 ; 
}



bubble sorting solution 
#include<iostream>
using namespace std;




int main (){
   int arr[] = {5,4,3,2,1};

   for(int i = 5-1;i>=1;i--){
    for(int j = 0 ;j <i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
   }

   for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
   }
    
    return 0 ; 
}




insertion sorting algo
#include<iostream>
using namespace std;




int main (){
   int arr[] = {5,4,3,2,1};

   
   for(int i = 1; i <5;i++){
    int temp = arr[i];
    int j = i -1;
    while(j>=0 && arr[j]>temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
   }


   for(int i = 0;i<5;i++){
    cout<<arr[i]<<" ";
   }
    
    return 0 ; 
}