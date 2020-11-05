#include <iostream>

using namespace std;

// function prototyping

// int sum (int a, int b); // OR
int sum (int, int);

// void NoReturn ( void ); // OR
void NoReturn ();

int main () {
    
    int a = 4, b = 5;

    // Here a and b are Actual parameters
    cout << sum(a, b) << endl;

    NoReturn ();

    return 0;
}

int sum (int a, int b) {
    // Here a and b are formal parameters
    return a + b;
}

void NoReturn () {
    cout << "Hello" << endl;
}