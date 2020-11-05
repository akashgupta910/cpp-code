#include <iostream>

using namespace std;

void Reverse (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n], a = 0;

        for (int i = 0; i < n; i++) { cin >> ar[i]; }

        for (int i = 0; i < n; i++) {

            a++;

            if (i == 0 && ar[i] > ar[i + 1]) { Reverse (ar[i], ar[i + 1]); }

            if (a > 1) {

                if (ar[i] < ar[i - 1]) { Reverse (ar[i], ar[i - 1]); }

                if (ar[i] < ar[i + 1] && i != n - 1) { Reverse (ar[i], ar[i + 1]); }

                a = 0;
            }
        }

        for (int i = 0; i < n; i++) { cout << ar[i] << ' '; }

        cout << endl;
    }

}