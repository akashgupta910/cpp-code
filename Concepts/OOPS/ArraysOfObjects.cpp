#include <iostream>

using namespace std;

class Member {

    string name;

    public: 
       
        void SetName (string name1) { 
            name = name1; 
        }

        void getName (void) {
            cout << name << endl;
        } 
};


int main () {

    // Member m1, m2, m3, m4;

    int n = 4;
    Member member[n];

    member[0].SetName ("Akash");
    member[1].SetName ("Rohit");
    member[2].SetName ("Marie");
    member[3].SetName("kurie");

    for (int i = 0; i < n; i++)
    {
        member[i].getName();   
    }
    

    // m1.SetName ("Akash");
    // m1.getName ();
    
    // m2.SetName ("Rohit");
    // m2.getName ();

    // m3.SetName ("Marie");
    // m3.getName ();

    // m4.SetName("kurie");
    // m4.getName ();
    
    return 0;
}