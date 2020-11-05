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

        int ans;

        for (int i = 1; i < n; i++)
        {
            if (ar[i] >= ar[i - 1]) 
            {
                ans = 1;
            }

            else {
                ans = 0;
                break;
            }
        }
        
        cout << ans << endl;

    }

    return 0;
}