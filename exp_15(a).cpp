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