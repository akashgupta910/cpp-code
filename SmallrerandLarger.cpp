#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        int ar[n];
        int smallerNumCount = 0, largerNumCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];

            if (ar[i] <= x)
                smallerNumCount++;
                
            if (ar[i] >= x)
                largerNumCount++;
        }

        cout << smallerNumCount << ' ' << largerNumCount << endl;
    }

    return 0;
}