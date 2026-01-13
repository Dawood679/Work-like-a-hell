🟢 Tuesday – Variables, Data Types & Operators (C++)
🔹 1. Variables kya hotay hain?

Variable ek container hota hai jisme hum data store kartay hain.

📌 Example:

int age = 20;


Yahan:

int → data type

age → variable ka naam

20 → value

🔹 2. Data Types (kis type ka data store karna hai)
✅ int

➡️ Integer numbers (without decimal)

int marks = 85;

✅ float

➡️ Decimal numbers (choti precision)

float price = 99.5;

✅ double

➡️ Decimal numbers (zyada precision)

double pi = 3.141592;

✅ char

➡️ Single character (single quotes ' ')

char grade = 'A';

✅ bool

➡️ True ya False

bool isPassed = true;

🔹 3. Variable Declaration & Initialization
🔸 Declaration (sirf batana variable hoga)
int x;

🔸 Initialization (value dena)
x = 10;

🔸 Dono aik sath
int x = 10;

🔹 4. Type Casting (ek data type ko dosray mein badalna)
🔸 Implicit (automatic)
int a = 10;
float b = a;   // 10 → 10.0

🔸 Explicit (forcefully)
float x = 5.6;
int y = (int)x;   // y = 5

🔹 5. Operators
➕ Arithmetic Operators

Math operations:

Operator	Kaam
+	Add
-	Subtract
*	Multiply
/	Divide
%	Remainder

📌 Example:

int a = 10, b = 3;
cout << a + b;  // 13
cout << a % b;  // 1

🔹 Relational Operators (comparison)
Operator	Meaning
<	chota
>	bara
<=	chota ya barabar
>=	bara ya barabar
==	barabar
!=	barabar nahi

📌 Example:

int a = 5, b = 10;
cout << (a < b);   // 1 (true)

🔹 Logical Operators
Operator	Meaning
&&	AND
`	
!	NOT

📌 Example:

int age = 20;
cout << (age > 18 && age < 30);  // true

🧪 PRACTICE PROGRAMS
✅ 1. Even / Odd Program
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
        cout << "Even number";
    else
        cout << "Odd number";

    return 0;
}


📌 Logic:

% 2 == 0 → Even

warna → Odd

✅ 2. Simple Calculator
#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+ - * /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;

    if (op == '+')
        cout << a + b;
    else if (op == '-')
        cout << a - b;
    else if (op == '*')
        cout << a * b;
    else if (op == '/')
        cout << a / b;
    else
        cout << "Invalid operator";

    return 0;
}

🔥 Tip (Important for Exam & Practice)

int / int = int (decimal cut ho jata)

float / int = float

== comparison ke liye hota hai, = assignment ke liye ❌