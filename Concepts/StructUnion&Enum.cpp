#include <iostream>

using namespace std;

// Make Your own Data type
// And Using typedef makes little bit easy to create

typedef struct programmer {
    int id;
    string name;
    string programmingLanguage;
    float salary;
} pr;

// Use only one data type inside it
// Otherwise it gives garbage value
union useOnlyOne
{
    int id;
    char name;
    float money;
};


int main () {
    
    // struct
    // struct programmer akash;
    // akash.id = 1;
    // akash.name = "Akash Gupta";
    // akash.programmingLanguage = "c++";
    // akash.salary = 24000000; 

    // pr ritik;
    // ritik.id = 2;
    // ritik.name = "Ritik";
    // ritik.programmingLanguage = "Java";
    // ritik.salary = 330000;

    // cout << akash.id << endl;
    // cout << akash.name << endl;
    // cout << akash.programmingLanguage << endl;
    // cout << akash.salary << endl;

    // union
    union useOnlyOne a1;
    a1.money = 23000000;
    cout << a1.money << endl;

    // enum
    enum akash {breakfast, lunch, dinner}; // Like Index
    akash meal1 = breakfast;
    akash meal2 = lunch;

    cout << breakfast << endl << meal1 << endl << meal2 << endl;

    return 0;
}