#include <iostream>

using namespace std;

// Base class
class Employee {

    public: 

        string name;
        float salary;

        Employee () {}

        Employee (string inpName, float inpSalary) {
            name = inpName;
            salary = inpSalary;
        }
};


// Derived Class
// Visibility mode - private and public
// By Default Its Private : Make the public members of base class to private member of derived class
// In Public mode : Make Pulic members of base class to public member of derived class
// you can never derived private member of base class through derived class

class Programmer : public Employee {

    string language;

    public:
        Programmer (string inpName, string inpLanguage) {
            name = inpName;
            language = inpLanguage;
        }

        void SetSalary (float inpSalary) {
            salary = inpSalary;
        }

        void GetData () {
            cout << "Programmer's Name is " << name << " and Programming Langauge is " << language << endl;
        }

        void GetSalary () {
            cout << "Salary is " << salary << endl;
        }
};

int main () {


    Programmer John("Akash", "cpp");
    // John.SetSalary (80000);

    John.salary = 3108; // It declare when Prorammer visibility mode is public

    John.GetData ();
    John.GetSalary ();

    
    return 0;
}