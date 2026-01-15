🟢 Thursday – Loops & Control Statements (Hinglish Explanation)

Loops ka use tab hota hai jab hamein same kaam baar-baar karna ho without code repeat kiye.

🔁 1. for Loop

Jab iterations pehle se pata hon (fixed times), tab for loop best hota hai.

Syntax:

for(initialization; condition; update){
    // code
}


Example (1–5 print):

for(int i = 1; i <= 5; i++){
    cout << i << endl;
}


👉 Pehle i = 1, phir condition check, phir code, phir i++.

🔄 2. while Loop

Jab iterations ka exact idea na ho, tab while loop use hota hai.

Syntax:

while(condition){
    // code
}


Example:

int i = 1;
while(i <= 5){
    cout << i << endl;
    i++;
}


👉 Pehle condition check hoti hai, phir code chalta hai.

🔂 3. do-while Loop

Is loop mein code kam az kam 1 dafa zaroor chalta hai, chahe condition false ho.

Syntax:

do{
    // code
} while(condition);


Example:

int i = 1;
do{
    cout << i << endl;
    i++;
} while(i <= 5);


👉 Condition baad mein check hoti hai.

⛔ 4. break

Loop ko turant stop kar deta hai.

Example:

for(int i = 1; i <= 10; i++){
    if(i == 5){
        break;
    }
    cout << i << endl;
}


👉 Output: 1 2 3 4

⏭️ 5. continue

Current iteration skip kar deta hai, loop continue rehta hai.

Example:

for(int i = 1; i <= 5; i++){
    if(i == 3){
        continue;
    }
    cout << i << endl;
}


👉 Output: 1 2 4 5

🧠 Practice Programs
✅ 1. Print numbers 1–100
for(int i = 1; i <= 100; i++){
    cout << i << " ";
}

✅ 2. Factorial of a number
int n, fact = 1;
cin >> n;

for(int i = 1; i <= n; i++){
    fact *= i;
}
cout << fact;


👉 Factorial = n! = 1 × 2 × 3 × ... × n

✅ 3. Fibonacci Series
int n, a = 0, b = 1, c;
cin >> n;

for(int i = 1; i <= n; i++){
    cout << a << " ";
    c = a + b;
    a = b;
    b = c;
}


👉 Series: 0 1 1 2 3 5 8 ...

✅ 4. Multiplication Table
int n;
cin >> n;

for(int i = 1; i <= 10; i++){
    cout << n << " x " << i << " = " << n * i << endl;
}

🔑 Summary

for → fixed iterations

while → condition based

do-while → at least once run

break → loop stop

continue → iteration skip

Ye topic programming ka foundation hai — jitni practice, utni mastery.