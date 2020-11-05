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

        string res;
        int increase = 0, decrease = 0;
        bool same = false;
        int num = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (ar[i] == ar[i + 1]) {
                num++;
            }

            if (n - 2 == num) {
                same = true;
            }
        }
        
        if (!same) {
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i] < ar[i + 1]) {
                    if (decrease > 0) {
                        increase = 0;
                        break;
                    }
                    else 
                        increase++;
                }

                else if (ar[i] >= ar[i + 1]) {
                    
                    if (increase == 0) {
                        decrease = 0;
                        break;
                    }

                    else 
                        decrease++;
                }
            }
        }

        if (decrease > 1 && increase > 0 || same || decrease > 0 && n == 3)
            res = "PERFECT";
        else
            res = "NOT PERFECT";
        
        cout << res << endl;
    }

    return 0;
}