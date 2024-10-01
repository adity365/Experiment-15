# Experiment-15
AIM : To study and implement Recursive Function 
# Recursive Function 
A recursive function is a function that calls itself in order to solve a problem. The function generally breaks the problem into smaller instances of the same problem, which it solves recursively until reaching a base case that stops the recursion.

Key components of a recursive function:
# Base Case
A condition that stops the recursion and returns a result without further self-calls.

# Recursive Case
The part where the function calls itself with a smaller or simpler input.

CODE :
Experiment 15(a)
```
// Name --> Aditya Agarwal
// PRN --> 23070123162

// code to find out factorial of a number 
# include <iostream>
using namespace std;

int fact(int n){
    if(n<=1){// Terminating statement(base condition)
    return 1;
    }
    else{
        return (n*fact(n-1)); // Recursion
    }
}

int main(){

    int X,n;
    cout << "Enter a number : " << endl;
    cin >> n;
}
```
Experiment 15(b)
```
// Name --> Aditya Agarwal
// PRN --> 23070123162

// Code which finds out the sum of integers using recursive functions 
# include <iostream>
using namespace std;

// Creating function
int add(int n){
    if(n<=1){ //Terminating statement (Base condition)
       return 1;
    }
    else {
        return (n+ add(n-1)); // Recursion
    }
}

int main(){
    int X,n;
    cout << "Enter a number : ";
    cin >> n;
    X = add(n); // Function Calling
    cout << X;
    return 0;

}
```
Experiment 15(c)
```
// Name --> Aditya Agarwal
// PRN --> 23070123162

// Code to reverse a string using recursive function
# include <iostream>
# include <string.h>
using namespace std;
// Creating function
void reverse(char * str){
    if(*str)/*Base Condition*/ {

        reverse (str + 1); // Recursion
        cout << ("%c",*str);
    }
}

int main(){

    char a[50];
    cout << "Enter a string : ";
    cin >> a ;
    reverse(a); // Function Calling 
}
```
Experiment 15(d)
```
// Name --> Aditya Agarwal
// PRN --> 23070123162

// Code which reverses integer entered with the help of recursive function
#include <iostream>
using namespace std;

// Creating function
void print_rev(int i) {
    if (i > 0) {  // Base condition for positive numbers
        cout << (i % 10);  // Print the last digit
        print_rev(i / 10);  // Recursion with the remaining digits
    }
}

int main() {
    int i;
    cout << "Enter a number: ";
    cin >> i;
    
    if (i == 0) {
        cout << 0;  // Handle the case where the input is 0
    } else if (i < 0) {
        cout << "-";  // Print the minus sign for negative numbers
        print_rev(-i);  // Call the function with a positive version of the number
    } else {
        print_rev(i);  // Call the function normally for positive numbers
    }

    return 0;
}

```

CONCLUSION : We have learned and Implemented how to use Recursive Function in C++.
