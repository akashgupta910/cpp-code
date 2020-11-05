#include <iostream>

using namespace std;

class Company {

    string productName [50];
    int productPrice [50];
    int counter;

    public:
        void initCounter (void) { counter = 0; }
        void SetProduct (void);
        void DisplayProduct ();
};


void Company :: SetProduct (void) {
   
    cout << "How many Products you want to Enter : ";
    cin >> counter;

    for (int i = 0; i < counter; i++)
    {
        cout << "Enter the Name of Product " << i + 1 << " : ";
        cin >> productName[i];
        cout << "Enter the Price of Product : ";
        cin >> productPrice[i];
    
    }
}

void Company :: DisplayProduct (void) {
    for (int i = 0; i < counter; i++)
    {
        cout << "Product Name is " << productName[i] << " and Price is " << productPrice[i] << endl;
    }
    
}

int main () {

    Company com;

    com.initCounter ();
    com.SetProduct ();
    com.DisplayProduct ();

    return 0;
}