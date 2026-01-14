🔹 1. if Statement

Jab condition true ho tab code chale.

Syntax
if (condition) {
    // code runs if condition is true
}

Example
int age = 20;

if (age >= 18) {
    cout << "You are eligible to vote";
}

🔹 2. if - else

Agar condition true ho to if, warna else.

int num = 5;

if (num % 2 == 0) {
    cout << "Even number";
} else {
    cout << "Odd number";
}

🔹 3. else if

Multiple conditions check karni hon.

int marks = 75;

if (marks >= 90) {
    cout << "A grade";
} 
else if (marks >= 70) {
    cout << "B grade";
}
else if (marks >= 50) {
    cout << "C grade";
}
else {
    cout << "Fail";
}

🔹 4. Nested if

if ke andar if.

int age = 20;
bool hasCNIC = true;

if (age >= 18) {
    if (hasCNIC) {
        cout << "You can vote";
    }
}


📌 Note: Nested if tab use hota hai jab multiple dependent conditions hon.

🔹 5. switch Statement

Multiple fixed options ke liye best.

Syntax
switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    default:
        // code
}

Example
int day = 3;

switch(day) {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    default:
        cout << "Invalid day";
}

🔹 6. break & default
🔸 break

switch se bahar nikalta hai

Agar na lagao → fall-through ho jata hai

🔸 default

Jab koi case match na kare

🧠 PRACTICE PROGRAMS
✅ 1. Largest of 3 Numbers
int a = 10, b = 25, c = 15;

if (a > b && a > c) {
    cout << "A is largest";
}
else if (b > a && b > c) {
    cout << "B is largest";
}
else {
    cout << "C is largest";
}

✅ 2. Grade System (if-else)
int marks;
cin >> marks;

if (marks >= 80) {
    cout << "A Grade";
}
else if (marks >= 60) {
    cout << "B Grade";
}
else if (marks >= 40) {
    cout << "C Grade";
}
else {
    cout << "Fail";
}

✅ 3. Menu-Driven Program (switch)
int choice;
cout << "1. Tea\n2. Coffee\n3. Juice\n";
cin >> choice;

switch(choice) {
    case 1:
        cout << "You selected Tea";
        break;
    case 2:
        cout << "You selected Coffee";
        break;
    case 3:
        cout << "You selected Juice";
        break;
    default:
        cout << "Invalid choice";
}

🔑 Exam Tips (VU / Programming)

✔ if-else → range conditions
✔ switch → fixed values only
✔ switch float/string support nahi karta
✔ break bhoolna = wrong output