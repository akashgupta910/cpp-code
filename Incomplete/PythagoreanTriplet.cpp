#include <iostream>
#include <bits/stdc++.h> 

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
            ar[i] = ar[i] * ar[i];
        }

        sort(ar, ar + n); 

        // for (int i = 0; i < n; i++)
        // {
        //     cout << ar[i] << endl;
        // }
        
        bool fl = false;

        for (int i = n; i >= 2; i--)
        {
            int a = n - i;

            for (int j = a + 1; j < i; j++)
            {
                if (ar[j] + ar[a] == ar[i] && !fl) {
                    fl = true;
                }
            }

            if (fl) {
                cout << "Yes" << endl;
                break;
            }
        }
        
        // int a2 = 0, b2 = 0, c2 = 0;
        // bool flag = false;

        // for (int i = 0; i < n - 1; i++)
        // {
        //     if (ar[i] < ar[i + 1]) {
        //         a2 = ar[i] * ar[i];
        //         b2 = ar[i + 1] * ar[i + 1];

        //         for (int j = n; j >= 2; j--)
        //         {
        //             c2 = ar[j] * ar[j];
                    
        //             if (a2 + b2 == c2 && !flag) {
        //                 flag = true;
        //             }
        //         }
                
        //     }

        //     if (flag) {
        //         cout << "Yes" << endl;
        //         // cout << a2 << ' ' << b2 << " = " << c2 << endl;
        //         break;
        //     }
        // }

        if (!fl)
            cout << "No" << endl;
        
    }
    

    return 0;
}