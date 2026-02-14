Chalo Dawood 🔥
Aaj Day 3 — Important Built-in String Functions (C++) ko simple tareeke se samajhte hain.

✅ 1️⃣ append()

👉 String ke end mein kuch add karta hai.

#include <iostream>
using namespace std;

int main() {
    string s = "Hello";
    s.append(" World");
    cout << s;
}


🟢 Output:

Hello World


Shortcut:

s += " World";

✅ 2️⃣ substr()

👉 String ka koi part nikalta hai.

Syntax:

string.substr(start_index, length)


Example:

string s = "Programming";
cout << s.substr(3, 4);


🟢 Output:

gram


👉 Index 3 se start karke 4 letters print karega.

✅ 3️⃣ find()

👉 Kisi word ya character ko search karta hai.
👉 Position return karta hai.

string s = "Hello World";
cout << s.find("World");


🟢 Output:

6


Agar word nahi mila to:

string::npos

✅ 4️⃣ erase()

👉 String ka koi part delete karta hai.

string s = "Hello World";
s.erase(5, 6);
cout << s;


🟢 Output:

Hello

✅ 5️⃣ insert()

👉 String ke beech mein kuch add karta hai.

string s = "Hello";
s.insert(5, " World");
cout << s;


🟢 Output:

Hello World

🔥 Practice Solutions
🟢 1️⃣ Do strings join karo
string a = "Good";
string b = " Morning";

string result = a + b;
cout << result;

🟢 2️⃣ Kisi word ko find karo
string s = "I love coding";
if (s.find("love") != string::npos)
    cout << "Word Found";
else
    cout << "Not Found";

🟢 3️⃣ String ka middle part print karo
string s = "Programming";
int len = s.length();

cout << s.substr(len/2 - 2, 4);


👉 Middle ke 4 letters print karega.

⚡ Quick Revision Table
Function	Kaam
append()	End me add karta hai
substr()	Part nikalta hai
find()	Word search karta hai
erase()	Delete karta hai
insert()	Beech me add karta hai

Agar chaho to main Day 3 ke liye 🔥 15 practice questions bhi bana deta hoon jo exam type hon 😎

is ka kiya matlab hn string::npos

Good question Dawood 🔥
Ye concept interview mein bhi pocha jata hai.

✅ string::npos ka kya matlab hai?

👉 npos ka full matlab hota hai:

No Position

Matlab:
String mein wo word ya character nahi mila.

🔎 Jab find() use karte hain

Example:

string s = "Hello World";

cout << s.find("Ali");


Output:

18446744073709551615


Ye ajeeb bada number actually string::npos hota hai 😄

🔥 Simple samajh lo

Agar word mil jaye → position return hoti hai
Agar word na mile → string::npos return hota hai

✅ Proper tareeka check karne ka
string s = "Hello World";

if (s.find("Ali") == string::npos)
    cout << "Word Not Found";
else
    cout << "Word Found";

💡 Ye itna bada number kyu hota hai?

npos internally hota hai:

static const size_t npos = -1;


Aur kyunki size_t unsigned hota hai,
-1 convert ho kar sab se bada possible number ban jata hai.

Is liye aapko huge number dikhta hai.

🧠 Ek line mein yaad kar lo:

string::npos = Word string mein exist nahi karta.



#include<iostream>
#include<string>

using namespace std;


int main(){
    string s = "Dawood";
    s.insert(6," Alam");
    cout<<s;
    

    return 0;
}