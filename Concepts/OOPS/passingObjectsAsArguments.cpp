#include <iostream>

using namespace std;

class Complex {

    int a;
    int b;

    public: 
       
        void SetData (int x, int y) { 
            a = x;
            b = y;
        }

        void SetComplex (Complex c1, Complex c2) {
            a = c1.a + c2.a;
            b = c1.b + c2.b;
        }

        void getData (void) {
            cout << a << " + " << b << 'i' << endl;
        } 
};


int main () {

    Complex obj1, obj2;

    obj1.SetData(1, 2);
    obj1.getData ();

    obj2.SetData (2, 5);
    obj2.SetComplex(obj1, obj2);
    obj2.getData ();
    
    return 0;
}