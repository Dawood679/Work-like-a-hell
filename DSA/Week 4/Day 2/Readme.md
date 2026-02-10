✅ 1. String Traversal (Loop se string access)

String basically characters ka array hoti hai. Har character index se access hota hai.

#include <iostream>
using namespace std;

int main() {
    string s = "Hello";

    for(int i = 0; i < s.length(); i++) {
        cout << s[i] << " ";
    }
}

Samajh lo:

s[i] → ith character

s.length() → string ki total length

Loop har character pe chalega

✅ 2. Characters Change Karna (Modification)

String mutable hoti hai — matlab characters change ho sakte hain.

string s = "hello";
s[0] = 'H';

cout << s;   // Hello

✅ 3. Lowercase → Uppercase Conversion

ASCII logic:

'a' - 'A' = 32

#include <iostream>
using namespace std;

int main() {
    string s = "dawood";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    cout << s;
}


✅ Better way (recommended):

#include <cctype>

s[i] = toupper(s[i]);

✅ 4. Vowel Count Program
#include <iostream>
using namespace std;

int main() {
    string s = "Hello World";
    int count = 0;

    for(int i = 0; i < s.length(); i++) {
        char ch = tolower(s[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u') {
            count++;
        }
    }

    cout << "Vowels: " << count;
}

✅ Practice Problems (Must Do)
1️⃣ String Reverse Print Karo
string s = "Hello";

for(int i = s.length()-1; i >= 0; i--) {
    cout << s[i];
}

2️⃣ Vowels Count Karo

👉 Upar wala program khud type karo without copy.

3️⃣ Lowercase → Uppercase Convert Karo

Input:

dawood


Output:

DAWOOD



#include<iostream>
#include<string>
using namespace std;


int main(){
    string s = "Dawood";

    for(int i = 0; i <s.length();i++){
        if(s[i]>= 'A' && s[i]<= 'Z'){
            s[i]  += 32;
        }
    }

    cout<<s<<endl;
    
    return 0;
}



count vowels
#include<iostream>
#include<string>
using namespace std;


int main(){
    string s = "Dawood";
    int count= 0 ;
    for(int i = 0 ;i < s.length();i++){
        char ch = tolower(s[i]);

        if(ch == 'a' || ch == 'e' || ch == 'i' ||  ch == 'o' || ch == 'u'){
            count++;
        }
    }

    cout<<count<<endl;
    
    return 0;
}


reverse an string 
#include<iostream>
#include<string>
using namespace std;


int main(){
    string s = "Dawood";
   for(int i = s.length()-1;i>=0;i--){
    cout<<s[i]<<" ";
   }
    
    return 0;
}



