#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n];
        string val = "";

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            val += ar[(n - 1) - 1];
        }
        
        cout << val << " " << endl;
    }

    return 0;
}