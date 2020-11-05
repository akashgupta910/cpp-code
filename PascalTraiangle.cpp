#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n] = {0};
        int newArr[n] = {0};

        for (int i = 0; i < n; i++)
        {
            if (i == 0 || i == 1)
                ar[i] = 1, newArr[i] = 1;

            else 
            {
                for (int j = 0; j < i + 1; j++)
                {
                    if (j == 0)
                        newArr[j] = 1;

                    else if (i == j) {
                        newArr[j] = 1;

                        for (int i = 0; i < n; i++)
                        {
                            ar[i] = newArr[i];
                        }
                        
                    }

                    else 
                        newArr[j] = ar[j - 1] + ar[j];
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << newArr[i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}