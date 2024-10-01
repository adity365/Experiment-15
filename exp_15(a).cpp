// Name --> Aditya Agarwal
// PRN --> 23070123162

// code to find out factorial of a number 
#include <iostream>
using namespace std;

int fact(int n) {
    if (n <= 1) { // Base condition
        return 1;
    } else {
        return (n * fact(n - 1)); // Recursive call
    }
}

int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    // Calling the fact function and printing the result
    int result = fact(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
