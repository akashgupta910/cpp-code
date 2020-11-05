#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ar[n];
        int  numOfSameElem = 0;

        for (int i = 0; i < n; i++) { cin >> ar[i]; }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++) 
            { 
                if (ar[i] == ar[j] && j != i) numOfSameElem ++; 
            }

            if (numOfSameElem == 0) { cout << ar[i] << endl; break; }

            numOfSameElem = 0;
        }
        

    }
    

    return 0;
}