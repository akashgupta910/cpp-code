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

        int num = 0, newArr[n] = {0};

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i] <= ar[j]) {
                    num++;
                }

                if (n - j == 1) {

                    if (n == num)
                        newArr[(n - num)] = ar[i];

                    else if (newArr[(n - num) - 1] != 0) 
                        num++;

                    else 
                        newArr[(n - num) - 1] = ar[i];

                    num = 0;
                }
            }
        }

        for (int i = 0; i < n - 2; i++)
        {
            cout << newArr[i] << " ";
        }        

        cout << endl;
        
    }

    return 0;
}