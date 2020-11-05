#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int num = 1, a = 0;

        for (int i = 0; i < n; i++)
        {
            cout << ar[((k * num) - 1) - a] << ' ';

            if (k - 1 == a) {
                num++;
                a = 0;

                if (((k * num) - 1) - a >= n) 
                    a++;
            }

            else 
                a++;
        }
        
        cout << endl;
    }

    return 0;
}