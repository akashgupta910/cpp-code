#include <iostream>

using namespace std;

// Forwarding Declaration
class B;

class A {

    int a;

    friend void Reverse (A &, B &);

    public:
        
        void SetData (int value) {
            a = value;
        }

        void DisplayValue (void) {
            cout << "The Value of A.a is " << a << endl;
        }
};


class B {

    int a;

    friend void Reverse (A &, B &);

    public:
        
        void SetData (int value) {
            a = value;
        }

        void DisplayValue (void) {
            cout << "The Value of B.a is " << a << endl;
        }
};


void Reverse (A &a, B &b) {
    int temp = a.a;
    a.a = b.a;
    b.a = temp;
}

int main () {

    A a1;
    a1.SetData (32);

    B b1;
    b1.SetData (54);

    Reverse (a1, b1);

    a1.DisplayValue ();
    b1.DisplayValue ();
    
    return 0;
}