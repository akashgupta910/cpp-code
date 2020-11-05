#include <iostream>

using namespace std;

// Call By Reference using pointer
void Swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Call by reference using Reference Variable
// int & 
void SwapReferenceVar (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    // return a;
}

int main () {
    
    int a = 4, b = 2;

    // Swap(&a, &b); // This will swap a and b using pointer reference

    SwapReferenceVar (a, b);  //This will swap a and b using reference variables
    // SwapReferenceVar (a, b) = 313; // This will swap a and b using reference variables

    cout << a << ' ' << b << endl;

    return 0;
}