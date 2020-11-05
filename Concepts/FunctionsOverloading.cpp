#include <iostream>

using namespace std;

// Function Overloading means make diferent functions with same name

int sum (int a, int b) {
    cout << "Function 1st : ";
    return a + b;
}

int sum (int a, int b, int c) {
    cout << "Function 2nd : ";
    return a + b + c;
}

int volume (float a) {
    cout << "The Volume of Cube 1st : ";
    return a * a * a;
}

int volume (int a) {
    cout << "The Volume of Cube 2nd : ";
    return a * a * a;
}

int main () {
    
    cout << sum(3, 5) << endl;
    cout << sum(3, 5, 89) << endl;
    
    cout << volume(2.6f) << endl;
    cout << volume(7) << endl;

    return 0;
}