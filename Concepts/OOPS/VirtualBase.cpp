#include <iostream>

using namespace std;

class A {

    public:
        void FuncA () {
            cout << "Class A" << endl;
        }
};

class B : virtual public A {

    public:
        void FuncB () {
            cout << "Class B" << endl;
        }
};

class C : virtual public A {

    public:
        void FuncC () {
            cout << "Class C" << endl;
        }
};

class D : public B, public C {

    public:
        void FuncD () {
            cout << "Class D" << endl;
        }
};

int main () {

    D obj;
    obj.FuncA ();
    
    return 0;
}