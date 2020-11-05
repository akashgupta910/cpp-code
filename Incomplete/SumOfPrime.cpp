#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {
        
        int n;
        cin >> n;

        int ar[n] = {0}, j = 0;
        bool exist = false;

        if (n == 4) {
            cout << 2 << ' ' << 2 << endl;
            exist = true;
        }

        else if (n % 2 == 0) {
            for (int i = 2; i <= n; i++)
            {       
                if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0 && i % 11 != 0 
                    || i == 2 || i == 3 || i == 5 || i == 7 || i == 11) 
                {
                    ar[j] = i;
                    j++;
                }       
            }

            for (int i = 0; i < j; i++)
            {
                for (int k = j - 1; k > i; k--)
                {
                    if (ar[i] + ar[k] == n) {
                        cout << ar[i] << ' ' << ar[k] << endl;
                        exist = true;
                        break;
                    }
                }
                    
                if (exist)
                    break;
            }

            // for (int i = 0; i < j; i++)
            // {
            //     cout << ar[i] << ' ';
            // }
            
        }
        

        if (!exist) 
            cout << -1 << endl;
        
    }

    return 0;
}