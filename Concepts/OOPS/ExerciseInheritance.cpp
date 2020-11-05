#include <iostream>

using namespace std;

class SimpleCalculator {
    
    int a, b;

    public: 
        void SetData1 (int inpA, int inpB) {
            a = inpA;
            b = inpB;
        }

        void SimpleOperations () {
            cout << "Add : " << a + b 
                << ", Sub : " << a - b
                << ", Mul : " << a * b
                << ", Divide : " << a / b << endl;
        }
};


class ScientificCalculator {
    
    int a, b;

    public: 
        void SetData2 (int inpA, int inpB) {
            a = inpA;
            b = inpB;
        }

        void Power ();
        void SqrRoot ();
};

void ScientificCalculator :: Power () {
    int res = 0;
    for (int i = 0; i < b; i++) { res += a * a; }
    cout << "Power of a^b is " << res << endl; 
}

void ScientificCalculator :: SqrRoot () {
    cout << "Square Root of a is " << a * a << " and Square root of b is " << b * b << endl;
}

class HybridCalculator : public SimpleCalculator, public ScientificCalculator {

    public:
        void Intro () {
            cout << "This is Multiple Inheritance and Mode of Inheritance is Public" << endl;
        }
};

int main () {

    HybridCalculator obj;

    obj.SetData1 (3, 5);
    obj.SetData2 (6, 8);
    obj.Intro ();
    obj.SimpleOperations ();
    obj.Power ();
    obj.SqrRoot ();

    
    return 0;
} 