#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int ar[n];

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        int numOfElem = 1, elem;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && ar[i] == ar[j])
                {
                    elem = ar[i];
                    numOfElem++;
                }
            }

            if (numOfElem > n / 2)
            {
                cout << elem << endl;
                break;
            }

            numOfElem = 1;
        }

        if (numOfElem == 1)
            cout << -1 << endl;
    }

    return 0;
}