#include <iostream>

using namespace std;

int main() {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        int ar[n];
        int ascendingPillar = 0, totalWater = 0, maxBox = 0;

        for (int i = 0; i < n; i++) { cin >> ar[i]; }

        for (int i = 0; i < n; i++) {

            if (ar[i] >= ascendingPillar) ascendingPillar = ar[i];

            else {

                for (int j = i + 1; j < n; j++)
                {
                    if (maxBox < ar[j]) maxBox = ar[j];
                }

                if (maxBox > ar[i] && maxBox <= ascendingPillar) totalWater += maxBox - ar[i];

                else if (maxBox > ar[i] && ascendingPillar < maxBox) totalWater += ascendingPillar - ar[i];
    
                maxBox = 0;
            }
        }


        cout << totalWater << endl;
    }

    return 0;
}