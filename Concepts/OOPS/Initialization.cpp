#include <iostream>

using namespace std;

// A way to initialize the value of class variables

class A {

    protected:
        int a;
        int b;

    public:
         A (int x, int y) : a(x), b (y) {}

         void GetData () { cout << a << " & " << b << endl; }
};

int main () {

    A obj (21, 65);
    obj.GetData ();
    
    return 0;
}