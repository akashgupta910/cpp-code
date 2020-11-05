#include <iostream>

using namespace std;

int factorial (int n) {
    if (n <= 1)
        return 1;

    return n * factorial(n - 1);
} 

// factorial(4) = 4 * factorial(4 - 1);  
// factorial(4) = 4 * 3 * factorial(3 - 1);  
// factorial(4) = 4 * 3 * 2 * factorial(2 - 1);  
// factorial(4) = 4 * 3 * 2 * 1;  

int fib (int n) {
    if (n <= 2) {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}


int main () {
    
    cout << factorial(4) << endl;
    cout << fib(6) << endl;

    return 0;
}