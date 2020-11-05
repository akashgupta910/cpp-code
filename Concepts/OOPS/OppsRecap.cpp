#include <iostream>

using namespace std;

class Calculator {

    private:
        float a, b;
        // void Multiply (void) { cout << "Multiplication is : " << a * b << endl; }

    public:
        // int setAB (float a1, float b1);
        void EnterNumber (void);
        void Sum (void) { cout << "Sum is : " <<a + b << endl; };
        void Subtract (void) { cout << "Suntraction is : " << a - b << endl; }
        void Multiply (void) { cout << "Multiplication is : " << a * b << endl; }
        void Divide (void) { cout << "Division is : " << a / b << endl; }
};

void Calculator :: EnterNumber (void) {
    float a1, b1;
    cout << "Enter First Number : ";  
    cin >> a1;
    cout << "Enter Second Number : ";  
    cin >> b1;
    a = a1;
    b = b1;
}

// void Calculator :: Sum (void) {
//     cout << "Sum is : " <<a + b << endl;
// }

int main () {
    
    Calculator cal;

    cal.EnterNumber();
    cal.Sum ();
    cal.Subtract ();
    cal.Multiply ();
    cal.Divide ();


    return 0;
}