#include <iostream>

using namespace std;

class Member {

    string name;
    string gender;
    static int count;

    public: 
        // void InitCount (void) { count = 0; }
        void SetNameAndGender (string name1, string gender1) { name = name1; gender = gender1; count ++; }
        void TotalMember (void) { cout << count << endl; }
};

int Member :: count; // by default 0 but Also can be changed

int main () {

    Member m1, m2, m3;

    m1.SetNameAndGender ("Akash", "Male");
    // m1.InitCount ();
    m1.TotalMember ();
    
    m2.SetNameAndGender ("Rohit", "Male");
    // m2.InitCount ();
    m2.TotalMember ();

    m3.SetNameAndGender ("Marie", "Female");
    // m3.InitCount ();
    m3.TotalMember ();


    
    return 0;
}