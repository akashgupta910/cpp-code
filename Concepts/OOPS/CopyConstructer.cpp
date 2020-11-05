#include <iostream>

using namespace std;

class A {
    
    int a;

    public:

        A (int val) {
            a = val;
        }

        // By default constructer have own copy constructor

        // A (A &obj) {  
        //     cout << "Custom constructer called !" << endl;
        //     a = obj.a;
        // }

        void GetData () {
            cout << a << endl;
        }
};

int main () {
    
    A obj1(21);
    obj1.GetData ();

    A obj2(obj1);
    obj2.GetData ();

    // A obj3; 
    // obj3 = obj1;  // Not Invoked
    // obj3.GetData ();

    A obj4 = obj1;  // Invoke
    obj4.GetData ();

    return 0;
}