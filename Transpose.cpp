#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int arr[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int newArr[n][n];

        for (int i = 0; i < n; i++)
        {
           for (int j = 0; j < n; j++)
           {
                newArr[i][j] = arr[j][i];
                cout << newArr[i][j] << ' ';
           }  
        }
        
        cout << endl;
    }

    return 0;
}