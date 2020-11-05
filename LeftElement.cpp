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

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int newArr[n] = {0}, num = 0, repeat = 0, a = 0, middleIndex;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] <= arr[j]) {

                    if (arr[i] == arr[j])
                        repeat++;

                    num++;
                }
            }
            
            if (repeat > 1) {
                for (int i = 0; i < repeat; i++)
                {
                    if (newArr[(n - num) + i] > 0)
                        a++;
                
                    else 
                        break;
                }
            }

            newArr[n - (num - a)] = arr[i];
            num = 0;
            repeat = 0;
            a = 0;
        }

        if (n % 2 == 1)
            middleIndex = n / 2;

        else
            middleIndex = (n / 2) - 1;

        cout << newArr[middleIndex] << endl;

    }

    return 0;
}