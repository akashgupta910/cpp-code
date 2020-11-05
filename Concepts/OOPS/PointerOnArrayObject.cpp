#include <iostream>

using namespace std;

class A {

    protected:
        int a, b;

    public:

        void SetData (int a1, int b1) {
            this->a = a1;
            this->b = b1;
        }

        void Display () {
            cout << a << " and " << b << endl;
        }
};

int main () {

    int n = 3;

    A *ptr = new A [n];
    A *ptrTemp = ptr;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cout << "Enter the Value of A and B : " << endl;
        cin >> x >> y;
        ptr->SetData(x, y);
        ptr++;
    }

    for (int i = 0; i < n; i++)
    {
        ptrTemp->Display ();
        ptrTemp++;
    }
    
    
    
    return 0;
}