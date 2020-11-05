#include <iostream>
#include <bits/stdc++.h> 

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int array[n];

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        sort(array, array + n);
        
        int repeatedNum = 0, smallestNum = 0;

        for (int i = 1; i <= n; i++)
        {
            if (array[i] == array[i - 1] && repeatedNum == 0) {
                repeatedNum = array[i];
            }

            if (array[i - 1] < array[i] && array[i] - array[i - 1] > 1 && smallestNum == 0) {
                smallestNum = array[i - 1] + 1;
            }
        }

        cout << repeatedNum << ' ' << smallestNum << endl;

    }

    return 0;
}