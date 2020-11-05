#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n, m; 
        cin >> n;
        cin >> m;

        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int a;
        
        a = ar[m - 1];

        ar[m - 1] = ar[n - m];
        ar[n - m] = a;

        string value = "";
        
        for (int i = 0; i < n; i++)
        {
            value += to_string(ar[i]) + " ";
        }

        cout << value << endl;
        
    }

    return 0;
}