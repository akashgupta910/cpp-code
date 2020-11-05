#include <iostream>

using namespace std;

class Complex {

    int a;
    int b;

    public: 
       
       friend Complex sumComplex (Complex o1, Complex o2);

        void SetData (int x, int y) { 
            a = x;
            b = y;
        }

        void getData (void) {
            cout << a << " + " << b << 'i' << endl;
        } 
};

Complex sumComplex (Complex c1, Complex c2) {  // This function is not member of the Complex class
    Complex c3;
    c3.SetData ((c1.a + c2.a), (c1.b + c2.b));
    return c3;
}

int main () {

    Complex obj1, obj2, sum;

    obj1.SetData(1, 2);
    obj1.getData ();

    obj2.SetData (2, 5);
    obj2.getData ();

    sum = sumComplex (obj1, obj2);
    sum.getData ();
    
    return 0;
}