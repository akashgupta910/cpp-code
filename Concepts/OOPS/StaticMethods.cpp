#include <iostream>

using namespace std;

class Member {

    string name;
    string gender;
    static int count;

    public: 
        static int getStaticData (void) {  // can acess only all static variables
            cout << "Total Members : " << count << endl;
            return 0;
        }

        void SetNameAndGender (string name1, string gender1) { name = name1; gender = gender1; count ++; }
        // void TotalMember (void) { cout << count << endl; }
};

int Member :: count; 

int main () {

    Member m1, m2, m3, m4;

    m1.SetNameAndGender ("Akash", "Male");
    // m1.TotalMember ();
    
    m2.SetNameAndGender ("Rohit", "Male");
    // m2.TotalMember ();

    m3.SetNameAndGender ("Marie", "Female");
    // m3.TotalMember ();

    m4.SetNameAndGender ("kurie", "Female");

    Member :: getStaticData ();
    
    return 0;
}