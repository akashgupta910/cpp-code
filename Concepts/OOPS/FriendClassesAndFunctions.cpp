#include <iostream>

using namespace std;

// forward Declaration
class Complex;

class Calculator {

    public:
        
        int SumRealComplex (Complex , Complex);
        int SumContComplex (Complex , Complex);
};


class Complex {

    int a;
    int b;

    friend Calculator :: SumRealComplex (Complex , Complex );
    friend Calculator :: SumContComplex (Complex o1, Complex o2);

    // Make friend whole class means give access to all private members to Calculator class or methods
    // friend Calculator;

    public:

        void SetData (int x, int y) { 
            a = x;
            b = y;
        }
};

Calculator :: SumRealComplex (Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

Calculator :: SumContComplex (Complex o1, Complex o2) {
    return (o1.b + o2.b);
}

int main () {

    Complex c1, c2;
    Calculator calc;

    c1.SetData(2, 4);
    c2.SetData(5, 8);

    int res = calc.SumRealComplex (c1, c2);
    cout << "The Value of Sum Real Complex is : " << res << endl;

    int res2 = calc.SumContComplex (c1, c2);
    cout << "The Value of Sum Cont Complex is : " << res2 << endl;

    return 0;
}