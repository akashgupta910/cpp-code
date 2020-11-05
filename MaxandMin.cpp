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

        int max = 0, min = 0, maxVal, minVal;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i] >= ar[j]) {
                    max++;
                }   

                if (ar[i] <= ar[j]) {
                    min++;
                }

                if (n - j == 1) 
                {
                    if (n == max) {
                        maxVal = ar[i];
                    }

                    if (n == min) {
                        minVal = ar[i];
                    }

                    min = 0;
                    max = 0;
                }
            }
        }
        
        cout << maxVal << " " << minVal << endl;
        
    }

    return 0;
}