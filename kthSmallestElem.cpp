#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n;

        int ar[n];

        for (int i = 0; i < n; i++) { cin >> ar[i]; }

        cin >> k;

        sort(ar, ar + n);

        cout << ar[k - 1] << endl;
        
    }
    

    return 0;
}