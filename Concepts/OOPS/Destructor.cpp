#include <iostream>

using namespace std;

// Destructor nor take any arguments nethier return any value

// Destructor destroy objects when it seems to be not will used

class A {
    
    int a;

    public:

        A () {}

        A (int val) {
            a = val;
            cout << "Constructor Called!"<< endl;
        }

        ~A () {
            cout << "Destructor Called!"<< endl;
        }

        void GetData () {
            cout << a << endl;
        }
};

int main () {

    cout << "Enter Main Function" << endl;

    A obj1 (42);
    {
        cout << "Enter Block " << endl;
        cout << "Create Two More Objects " << endl;
        A obj2, obj3;
        cout << "Exit This Block" << endl; 
    }

    cout << "Back to Main "<< endl;


    return 0;
}