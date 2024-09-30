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
