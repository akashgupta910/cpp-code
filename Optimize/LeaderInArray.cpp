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

        int num = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ar[i] > ar[j])
                    num++;
            }

            if (n - (i + 1) == num)
                cout << ar[i] << ' ';

            num = 0;
        }

        cout << endl;
        
        
    }

    return 0;
}