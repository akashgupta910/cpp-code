#include <iostream>

using namespace std;

class Login {

    string username, password;
    int mobileNum;

    public:

        Login () {}

        Login (string name, string pass) { 
            username = name;  
            password = pass;
        }

        Login (int mobile, string pass) {
            mobileNum = mobile;
            password = pass;
        }

        void GetUsernamePass (); 
        void GetMobilePass (); 
};

void Login :: GetUsernamePass () {
    cout << "User Username is " << username << " and Password is " << password << endl;
}

void Login :: GetMobilePass () {
    cout << "User Mobile Number is " << mobileNum << " and Password is " << password << endl;
}

int main () {

    Login user1("Akash Gupta", "123AG.");
    user1.GetUsernamePass ();

    Login user2(91020382, "akash");
    user2.GetMobilePass ();

    // Login user3;  // Gives Garbage value
    // user3.GetMobilePass ();

    return 0;
}