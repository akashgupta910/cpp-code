#include<iostream>

using namespace std;

int main () {

    int n = 2;

    int a = (n * n);
    int b = 0, c = n;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < c; j++) {

            if (n - b == 0) {
                c--;
                b = 0;
                cout << " $";
            }
            
            cout << n - b << " ";

            if (a - i == 1) {
                cout << "$";
            }

            if (c - j == 1) { 
                b++;
            }

        }
    }

}