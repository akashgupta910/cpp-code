#include<iostream>

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
        

        int b = n - 1;

        for (int i = 0; i < n; i++)
        {
            cout << ar[b - i] << " ";
        }
        
    }

    return 0;
}