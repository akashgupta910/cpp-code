#include <iostream>

using namespace std;

class A {
    int a;

    protected:
        int b;

    public: 
        void SetData (int , int);
};

void A :: SetData (int a1, int b1) {
    a = a1;
    b = b1;
}


class B : protected A {
    int c;

    public:
        void SetData (int c1) {
            c = c1;
        }

        void GetData () {
            cout << c << endl;
        } 
}; 


int main () {
    
    B obj1;
    obj1.SetData (21);
    obj1.GetData ();

    return 0;
}