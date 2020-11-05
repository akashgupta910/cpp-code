#include <iostream>

using namespace std;

class A {
    int a;

    public:
        void SetDataA (int a1) {
            a = a1;
        }

        int GetDataA () {
            return a;
        }
};

class B {
    int b;
    public:
        void SetDataB (int b1) {
            b = b1;
        }

        int GetDataB () {
            return b;
        }
};

class C : public A, public B {

    int c;

    public: 
        C (int c1) {
            c = c1;
        }

        void GetData () {
            cout << GetDataA() << ", " << GetDataB () << " & " << c << endl;
        }
};

int main () {

    C obj(21);
    obj.SetDataA (43);
    obj.SetDataB (80);
    obj.GetData ();
    
    return 0;
}