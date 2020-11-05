#include <iostream>

using namespace std;

int PrintAverage(int ar[], int n)
{

    int newArr[n], loopTime = 1, sum = 0, avg = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < loopTime; j++)
        {
            sum += ar[j];

            if (loopTime - j == 1)
            {
                cout << sum / loopTime << " ";
            }
        }

        sum = 0;
        loopTime++;
    }

    return 0;
}

int main()
{

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n];
        // int a = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];

            // a += ar[i];
            // cout << a / (i + 1) << ' ';
        }

        PrintAverage(ar, n);

        cout << endl;
    }

    return 0;
}