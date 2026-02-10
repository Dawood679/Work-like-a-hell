Day 2 – 2D Arrays / Matrix ko bilkul brief & exam-friendly tareeke se parh lo 👇

🔹 1. 2D Array Syntax (Matrix)

2D array = rows × columns

int a[3][3];   // 3 rows, 3 columns


Initialization:

int a[2][3] = {
  {1, 2, 3},
  {4, 5, 6}
};


📌 Indexing: a[row][col]

🔹 2. Matrix Input / Output

Input:

for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
    cin >> a[i][j];


Output:

for(int i=0;i<r;i++){
  for(int j=0;j<c;j++)
    cout << a[i][j] << " ";
  cout << endl;
}

🔹 3. Row-wise Traversal

➡️ Pehle row complete, phir next row

for(int i=0;i<r;i++)
  for(int j=0;j<c;j++)
    cout << a[i][j];

🔹 4. Column-wise Traversal

⬇️ Pehle column complete, phir next column

for(int j=0;j<c;j++)
  for(int i=0;i<r;i++)
    cout << a[i][j];

🔹 5. Row Sum

Har row ka sum

for(int i=0;i<r;i++){
  int sum = 0;
  for(int j=0;j<c;j++)
    sum += a[i][j];
  cout << sum << endl;
}

🔹 6. Column Sum

Har column ka sum

for(int j=0;j<c;j++){
  int sum = 0;
  for(int i=0;i<r;i++)
    sum += a[i][j];
  cout << sum << endl;
}

🧠 One-Line Yaad Rakhne Wali Baat

a[i][j] → row i, column j

Row-wise = outer loop row

Column-wise = outer loop column

Agar chaho to next Day 3 (Matrix problems: transpose, diagonal, max/min) bhi isi short style mein kara deta hoon 😄

row and col ka matrix type mein dikha sakty oh

Haan bilkul 👍
Row aur Column ko matrix style mein visually dekh lo — ek nazar mein clear ho jaye ga 👇

🔢 Example Matrix
      Col 0  Col 1  Col 2
Row 0   1      2      3
Row 1   4      5      6
Row 2   7      8      9

🔹 Row-wise Traversal

➡️ Ek poori row at a time

1  2  3   ← Row 0
4  5  6   ← Row 1
7  8  9   ← Row 2


Code logic:

for(row)
  for(col)

🔹 Column-wise Traversal

⬇️ Ek poora column at a time

1  4  7   ← Col 0
2  5  8   ← Col 1
3  6  9   ← Col 2


Code logic:

for(col)
  for(row)

🧠 Golden Trick (Exam + Coding)

a[i][j] → i = row, j = column

Horizontal move = column change

Vertical move = row change

Agar chaho to main row sum / column sum isi matrix pe step-by-step bhi dikha doon 👌





Input and output in 2D array

#include<iostream>
using namespace std;


int main (){

    int a[3][3] = {{},{},{}};


    for(int row = 0 ; row<3;row++){
        for(int col = 0 ; col < 3;col++){
            cin>>a[row][col];
        }
    }
     for(int row = 0 ; row<3;row++){
        for(int col = 0 ; col < 3;col++){
            cout<<a[row][col];
        }
    }
    return 0;
}


