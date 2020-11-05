#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];   
        }

        string value = "";

        for (int i = 0; i < n; i++)
        {
            if (ar[i] == i + 1)
            {
                value += to_string(ar[i]) + " ";
            }
        }
        
        if (value == "") {
            value = "Not Found";
        }

        cout << value << endl;
        
    }
 
    return 0;
}