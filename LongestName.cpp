#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string names[n];
        int largestIndex = 0, largestLength = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> names[i];

            if (names[i].length() > largestLength) {
                largestLength = names[i].length();
                largestIndex = i;
            }
        }
                
        cout << names[largestIndex] << endl;

    }
    

    return 0;
}