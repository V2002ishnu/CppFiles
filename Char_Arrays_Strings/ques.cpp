// ................................................................................................................
// function create........................

// #include <iostream>
// #include <iomanip> // for setprecision()
// #include <limits> // for numeric_limits

// using namespace std;

// float add(float a,float b){
//    return a+b;
// }

// float sub(float a,float b){
//    return a-b;
// }

// float mul(float a,float b){
//    return a*b;
// }

// float div(float a,float b){
//    if (b == 0) {
//       // cerr << "Error: division by zero\n";
//       return 1;
//    }
//    return a/b;
// }

// int main() {
//     // Declare variables
//     float num1, num2, result;
//     char op;

//     // Get user input
//     cout << "Enter first number: ";
//     cin >> num1;

//     cout << "Enter operator (+, -, *, /): ";
//     cin >> op;

//     cout << "Enter second number: ";
//     cin >> num2;

//     // Perform calculation
//     switch(op) {
//         case '+':
//             // result = num1 + num2;
//             result=add(num1,num2);
//             break;
//         case '-':
//             result = sub(num1,num2);
//             break;
//         case '*':
//             result = mul(num1,num2);
//             break;
//         case '/':
//             if (div(num1,num2)) {
//                 cerr << "Error: division by zero\n";
//                 return 1;
//             }
//             result = div(num1,num2);
//             break;
//         default:
//             cerr << "Error: invalid operator\n";
//             return 1;
//     }

//     // Display result
//     cout << setprecision(numeric_limits<double>::max_digits10) // Show all significant digits
//          << num1 << " " << op << " " << num2 << " = " << result << endl;

//     return 0;
// }

// ............................................................................................................................
// // recursive function........................................

// #include<iostream>
// using namespace std;

// //create a recursive funtion of the following logic given in the main function.
// int factorial(int n){
//    // base case
//    if(n==0 || n==1){
//       return 1;
//    }
//    return n * factorial(n-1);
// }

// ..........................................................................................................................
// debugging 1..................................................
// #include <iostream>
// #include <string>

// using namespace std;

// int count_vowels(string str) {
//     int count = 0;
//     for (int i = 0; i < str.length(); i++) {
//         char c = tolower(str[i]);
//         if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
//             count++;
//         }
//     }
//     return count;
// }

// int main() {
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);
//     cout << "The number of vowels in the string is: " << count_vowels(input) << endl;
//     return 0;
// }

// .....................................................................................................................................
// debugging 2........................

// #include <iostream>

// using namespace std;

// bool is_prime(int num) {
//     if (num <= 1) {
//         return true;
//     }
//     for (int i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return true;
//         }
//     }
//     return false;
// }

// int main() {
//     int input;
//     cout << "Enter a number: ";
//     cin >> input;
//     if (is_prime(input)) {
//         cout << input << " is not a prime number." << endl;
//     } else {
//         cout << input << " is  a prime number." << endl;
//     }
//    //  cout << input << " is not a prime number." << endl;

//     return 0;
// }

// ......................................................................................................................
// debugging 3................

// #include <iostream>
// #include <vector>

// using namespace std;

// int second_largest_number(vector<int>& nums) {
//     int n = nums.size();
//     if(n<=1){
//       return -1;
//     }
//     int largest = INT_MIN;
//     int second_largest = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         if (nums[i] > largest) {
//             second_largest = largest;
//             largest = nums[i];
//         } else if (nums[i] > second_largest) {
//             second_largest = nums[i];
//         }
//     }
//     return second_largest;
// }

// int main() {
//     int n;
//     cout<<"Enter the Number of elements  : ";
//     cin>>n;

//     vector<int> nums(n);
//     for(int i = 0 ; i  < n ;i++){
//         cin>>nums[i];
//     }
//     cout << "The second largest number in the array is: " << second_largest_number(nums) << endl;
//     return 0;
// }

// ...................................................................................................................
// TIC TAC TOE medium .................................................
// #include <iostream>
// using namespace std;

// char board[3][3] = {{'1','2','3'},
//                     {'4','5','6'},
//                     {'7','8','9'}};
// char player = 'X';

// void drawBoard() {
//    cout << "*******************************   Tic Tac Toe  ******************************" << endl;
//    for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//          cout << board[i][j] << " ";
//       }
//       cout << endl;
//    }
// }

// void takeTurn() {
//    int choice;
//    cout << "Player " << player << ", enter a number: ";
//    cin >> choice;

//    int row = (choice - 1) / 3;
//    int col = (choice - 1) % 3;

//    if (board[row][col] == 'X' || board[row][col] == 'O') {
//       cout << "Invalid move, try again." << endl;
//       takeTurn();
//    } else {
//       board[row][col] = player;
//    }
// }

// void switchPlayer() {
//    if (player == 'X') {
//       player = 'O';
//    } else {
//       player = 'X';
//    }
// }

// bool checkWin() {
//    // Check rows for a win
//    for (int i = 0; i < 3; i++) {
//       if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//          return true;
//       }
//    }

//    // Check diagonals for a win
//    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//       return true;
//    }

//    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//       return true;
//    }

//    return false;
// }

// bool checkTie() {
//    for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//          if (board[i][j] != 'X' && board[i][j] != 'O') {
//             return false;
//          }
//       }
//    }

//    return true;
// }

// int main() {
//    drawBoard();

//    while (true) {
//       takeTurn();
//       drawBoard();

//       if (checkWin()) {
//          cout << "Player " << player << " wins!" << endl;
//          break;
//       }

//       if (checkTie()) {
//          cout << "Tie game!" << endl;
//          break;
//       }

//       switchPlayer();
//    }

//    return 0;
// }
// .............................................................................................................................
// TIC TAC TOE hard..............
// #include <iostream>
// using namespace std;

// char board[3][3] = {{'1','2','3'},
//                     {'4','5','6'},
//                     {'7','8','9'}};
// char player = 'X';

// void drawBoard() {
//    cout << "*******************************   Tic Tac Toe  ******************************" << endl;
//    for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//          cout << board[i][j] << " ";
//       }
//       cout << endl;
//    }
// }

// void takeTurn() {
//    int choice;
//    cout << "Player " << player << ", enter a number: ";
//    cin >> choice;

//    int row = (choice - 1) / 3;
//    int col = (choice - 1) % 3;

//    if (board[row][col] == 'X' || board[row][col] == 'O') {
//       cout << "Invalid move, try again." << endl;
//       takeTurn();
//    } else {
//       board[row][col] = player;
//    }
// }

// void switchPlayer() {
//    if (player == 'X') {
//       player = 'O';
//    } else {
//       player = 'X';
//    }
// }

// bool checkWin() {
//    // Check rows for a win
//    for (int i = 0; i < 3; i++) {
//       if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) {
//          return true;
//       }
//    }
//    // ...............change
//    for (int i = 0; i < 3; i++) {
//       if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) {
//          return true;
//       }
//    }

//    // Check diagonals for a win
//    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
//       return true;
//    }

//    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
//       return true;
//    }

//    return false;
// }

// bool checkTie() {
//    for (int i = 0; i < 3; i++) {
//       for (int j = 0; j < 3; j++) {
//          if (board[i][j] != 'X' && board[i][j] != 'O') {
//             return false;
//          }
//       }
//    }

//    return true;
// }

// int main() {
//    drawBoard();

//    while (true) {
//       takeTurn();
//       drawBoard();

//       if (checkWin()) {
//          cout << "Player " << player << " wins!" << endl;
//          break;
//       }

//       if (checkTie()) {
//          cout << "Tie game!" << endl;
//          break;
//       }

//       switchPlayer();
//    }

//    return 0;
// }

// You are given 2 integers - X,Y. You can do one of the following operations multiple times

//   1.Select any other integer Z and increase X by Z and decrease Y by Z OR
//   2.Select any other integer Z and decrease X by Z and increase Y by Z
// After any number of operations - you have to check if X==Y

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t;
//    cin >> t;
//    while (t--)
//    {
//       int a, b;
//       cin >> a >> b;

//       if ((a + b) % 2 == 0)
//       {
//          int z = (a + b) / 2;
//          if ((a - z) >= 0 && (b - z) >= 0)
//          {
//             cout << "Yes" << endl;
//          }
//          else
//          {
//             cout << "No" << endl;
//          }
//       }
//       else
//       {
//          cout << "No" << endl;
//       }
//    }
//    return 0;
// }

// ......................................................................................
// function 2.cpp................
#include <bits/stdc++.h>

using namespace std;
string insert_space(string text)
{
   for(int i=0;i<text.length();i++){
      if(text[i] >= 'a' && text[i] >= '')
   }
}

int main()
{
   string text = "HelloWorldHelloWorldHelloWorldHelloWorld";
   cout << "Original String:\n";
   cout << text;
   cout << "Modified string :\n";
   cout << insert_space(text) << endl;
}
