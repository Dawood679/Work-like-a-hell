## ✅ Day 5 – Advanced Star Patterns

**Topics**

* Combining multiple logics
* Visual thinking

**Patterns**

```
*
* *
* * *
* *
*
```

```
   *
  * *
 * * *
  * *
   *
```

---


## First pattern
```
#include<iostream>
using namespace std;


int print(int n){
    for(int row = 0;row<n;row++){
        //print start first triangle type
        for(int col = 0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    int temp = n-1;
    //sencond loop
    for(int row = 0;row<n-1;row++){
        //print star
        for(int col = 0;col<temp;col++){
            cout<<"* ";
        }
        temp--;
        cout<<endl;
    }
    return 0;
};

int main(){
    
    print(3);
    return 0;

}
```
## Second loop printting

```
#include<iostream>
using namespace std;


int print(int n){
    int firsttmep = n-1;
    for(int row = 0 ;row<n;row++){
        for(int space = 0 ;space<firsttmep;space++){
            cout<<" ";
        }

        for(int col = 0 ; col<=row;col++){
            cout<<"* ";
        }
        firsttmep--;

        cout<<endl;
    }

    int temp = n-1;
    for(int row = 0;row<n-1;row++){
        for(int space = 0;space<=row;space++){
            cout<<" ";
        }

        for(int col = temp;col>0;col--){
            cout<<"* ";
        }
        temp--;
        cout<<endl;
    }

    return 0;
};

int main(){
    
    print(5);
    return 0;

}

```