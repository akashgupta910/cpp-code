#include <iostream>

using namespace std;

class A {

    protected:
        int a, b;

    public:

        A (int i, int j) : a(i), b (j) {}

        void Display () {
            cout << a << " and " << b << endl;
        }
};


int main () {
    
    A obj (54, 76);

    A *ptr = &obj;

    (*ptr).Display ();

    // Arrow Operator
    ptr->Display();  

    // A *ptr2 = new A;
    // *ptr2->Display();

    return 0;
}