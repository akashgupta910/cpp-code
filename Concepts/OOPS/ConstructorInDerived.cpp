#include <iostream>

using namespace std;

class Base1 {

    protected:
        int a;

    public: 
        Base1 (int inpA) { 
            a = inpA; 
            cout << "Base1 Contructor Called" << endl; 
        }

        void GetData () {
            cout << a << endl;
        }
};

class Base2 {

    protected:
        int a;

    public: 
        Base2 (int inpA) { 
            a = inpA; 
            cout << "Base2 Contructor Called" << endl; 
        }

        void GetData () {
            cout << a << endl;
        }
};

class Derived : public Base2, public Base1 {

    protected:
        int derived;

    public: 
        Derived (int a, int b, int c) : Base1(a), Base2 (b) { 
            derived = c;
            cout << "Derived Contructor Called" << endl; 
        }

        void GetData () {
            cout << derived << endl;
        }

};

int main () {

    Derived obj (23, 44, 76);
    
    return 0;
}