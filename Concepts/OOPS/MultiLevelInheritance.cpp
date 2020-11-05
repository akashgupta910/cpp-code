#include <iostream>

using namespace std;

class Student {

    string name;
    
    public:

        void SetName (string inpName) {
            name = inpName;
        }

        string GetName () {
            return name;
        }
};

class Exam : public Student {

    int marks;

    public: 
         void SetMarks (int inpMarks) {
            marks = inpMarks;
        }

        int GetMarks () {
            return marks;
        }

};

class Result : public Exam {

    int percentage;

    public: 
         void SetPercentage (int inpPercentage) {
            percentage = inpPercentage;
        }

        void GetPercentage () {
            cout << "Student's Percentage is " << percentage << endl;
        }

        void GetData () {
            cout << "Student's Name : " << GetName () << ", Marks : " << GetMarks () << " and Percentage is " << percentage << endl;
        }

};

int main () {
    
    Result john;

    john.SetName("John");
    john.SetMarks(450);
    john.SetPercentage(70);

    john.GetData ();

    return 0;
}