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

        int secondLarget = 0, num = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i] >= ar[j]) {
                    num++;
                }

                if (n - j == 1) {

                    if (n - 1 == num) {
                        secondLarget = ar[i];
                        break;
                    }

                    else {
                        num = 0;
                    }
                } 
            }
        }

        cout << secondLarget << endl;
        
    }

    return 0;
}