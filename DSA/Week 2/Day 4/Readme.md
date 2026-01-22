### ✅ Day 4 – Pyramid & Inverted Pyramid

**Topics**

* Symmetry
* Mid alignment

**Patterns**

```
   *
  * *
 * * *
* * * *
```

```
* * * *
 * * *
  * *
   *
```

solution for one 
#include<iostream>
using namespace std;



int main (){
    for(int row = 0 ; row <4;row++){
        for(int space = 0; space<4-row+1;space++){
            cout<<" ";
        }

        //starts
        for(int col = 0; col <row+1;col++){
            cout<<"* ";
        }

        cout<<endl;
    }
    return 0;
}


sencond solution is here


#include<iostream>
using namespace std;



int main (){
    int temp = 4;
    for(int row = 0 ; row <4;row++){
        for(int space = 0; space<row;space++){
            cout<<" ";
        }

        //starts
        for(int col = 0; col <temp;col++){
            cout<<"* ";
            

        }
        temp--;

        cout<<endl;
    }
    return 0;
}