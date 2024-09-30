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