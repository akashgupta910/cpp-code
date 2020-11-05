#include <iostream>

using namespace std;

class A {

    protected:
        int a;

    public:
        void Intro () { cout << "Hello Class A" << endl; }
};

class B {
 
    protected:
        int a;

    public:
        void Intro () { cout << "Hello Class B" << endl; }
};

class Derived : public A, public B {
    
  public:

        void Intro () { A :: Intro (); }

        void MyIntro () { cout << "Hello Class Derived" << endl; }
};

int main () {

    Derived obj;
    obj.Intro ();
    
    return 0;
}