#include <iostream>

using namespace std;

int main () {

    // simple pointer
    int a = 31;
    int* b = &a;
    
    // Address
    cout << b << endl;

    // Value
    cout << *b << endl;

    int** c = &b;

    // Address of c
    cout << c << endl;

    // Address of b (Value of b is address of a)
    cout << *c << endl;

    // Value of a
    cout << **c << endl;
    
    
    // Array & Pointer
    int ar[4] = {1, 2, 3, 4};
    
    int* p = ar;

    // cout << *p++ << endl;
    // cout << *++p << endl;

    for (int i = 0; i < 4; i++)
    {
        // Address
        cout << p + i << endl;

        // Value
        cout << *p + i << endl;
    }
    

    return 0;
}