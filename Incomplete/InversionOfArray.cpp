#include <iostream>
using namespace std;

void Reverse (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n], inversion = 0; //, smallnumIndex, smallNum;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        for (int i = 0; i < n; i++)
        {
            // smallNum = ar[i];

            for (int j = i + 1; j < n; j++)
            {
                if (ar[i] > ar[j]) { // && ar[j] < smallNum) {
                    // smallNum = ar[j];
                    // smallnumIndex = j;
                    Reverse(ar[i], ar[j]);
                    inversion++;
                }
            }

            // if (ar[i] > smallNum) {
            //     Reverse (ar[i], ar[smallnumIndex]);
            //     inversion++;
            // }

            for (int i = 0; i < n; i++)
            {
                cout << ar[i] << ' ';
            }

            cout << endl;
            
        }

        cout << inversion << endl;
        
    }

    return 0;
}