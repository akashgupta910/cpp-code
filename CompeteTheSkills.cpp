#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n = 3, a[n] = {0}, b[n] = {0};
        
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];    
        }
        
        for (int i = 0; i < n; i++) 
        {
            cin >> b[i];    
        }
        
        // Lets Compare Both
        int aScore = 0, bScore = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                aScore++;

            else if (a[i] < b[i]) 
                bScore++;
        }
        
        cout << aScore << ' ' << bScore << endl;

    }

    return 0;
}