#include <iostream>

using namespace std;

class Base {

    protected:
        int a, b;

    public:

        int var_base = 23;

        // Virtual Function -> whenever you call the function it invoke the function of Derived Class

        virtual void SetData (int a1, int b1) {
            this->a = a1;
            this->b = b1;
        }

        virtual void Display () {
            cout << "Base : " << a << " and " << b << endl;
        }
};

class Derived : public Base {

    protected:
        int a, b;

    public:

        int var_derive = 765;

        void SetData (int a1, int b1) {
            this->a = a1;
            this->b = b1;
        }

        void Display () {
            cout << "Derived : " << a << " and " << b << endl;
        }
};

int main () {

    Base base_obj;
    Derived derive_obj;

    Base *base_pointer;

    base_pointer = &derive_obj;

    // base_pointer->var_derive; // throw error because you can only use the method of Base class
    base_pointer->var_base;
    base_pointer->SetData(23, 56);
    base_pointer->Display ();

    return 0;
}