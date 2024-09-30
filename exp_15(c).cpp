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