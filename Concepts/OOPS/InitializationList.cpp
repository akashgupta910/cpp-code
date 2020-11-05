#include <iostream>

using namespace std;

// The way of initialize the variable in constructor when object is created - that's it

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

    A obj (21, 43);

    obj.Display ();

    return 0;
}