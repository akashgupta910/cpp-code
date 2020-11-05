#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n, m, k;
        
        cin >> n >> m >> k;

        int nPlusM = n + m, ar[nPlusM];

        for (int i = 0; i < nPlusM; i++) { cin >> ar[i]; }

        sort(ar, ar + nPlusM);

        for (int i = 0; i < nPlusM; i++)
        {
            if ((i + 1) == k) { cout << ar[i] << endl; break; }
        }
        
    }

    return 0;
}