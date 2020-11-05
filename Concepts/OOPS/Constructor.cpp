#include <iostream>

using namespace std;

class A {

    int a;

    public:
        A (void);  // This is constructor. Invoke (called) whenever object created
        
        void printValue (void) {
            cout << a << endl;
        }
};

A :: A (void) {  // Default Constructor
    a = 31;
}

int main () {
    
    A a1, a2;

    a1.printValue ();
    a2.printValue ();

    return 0;
}