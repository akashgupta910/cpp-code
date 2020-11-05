#include <iostream>

using namespace std;

// This function is when you use call same function again and again
// this inline not initialize variable repeatly, it loads with complier
// but do not use if your function contain more than 1 or 2 lines code
// in simple use when your funciton contain very less code
inline int product (int a, int b) {
    // static int c = 0; // This executes only once
    // c++;
    return a * b; // + c;
}

float percentage (int marks, int totalMarks = 500) { // last arument will be default argument
    float percent = ((float)marks / (float)totalMarks) * (float)100;
    return percent;
}

int a (const int *p) {  // now you can not change the value of p inside this function
    // *p = 8;
    return *p;
}

int main () {
    
    cout << product(3, 6) << endl;
    cout << product(3, 6) << endl;
    cout << product(3, 6) << endl;
    cout << product(3, 6) << endl;
    cout << product(3, 6) << endl;
    cout << product(3, 6) << endl;
    cout << product(3, 6) << endl;


    cout << percentage (350, 600) << '%' << endl;
    cout << percentage (350) << '%' << endl;

    int b = 5;

    cout << a (&b) << endl;

    return 0;
}