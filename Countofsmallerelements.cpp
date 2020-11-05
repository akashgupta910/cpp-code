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

        int x;
        cin >> x;

        int count = 0;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] <= x) {
                count++;
            }
        }
        
        cout << count << endl;

    }

    return 0;
}