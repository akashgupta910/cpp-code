#include <iostream>

using namespace std;

// Class which contains at least one pure virtual function called Abstract Base Class

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

        virtual void Display () = 0;  // do nothing function -> pure vityual function
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
    
    return 0;
}