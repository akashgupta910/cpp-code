#include <iostream>

using namespace std;

int main () {
    
    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        bool atleast = false;
        int num = 0;

        if (n < 100) 
            atleast = true;

        else {

            string concatNum;

            concatNum = to_string(n) + to_string(n * 2) + to_string(n * 3);

            // cout << concatNum << endl;

            string ar = "123456789";

            if (concatNum.length() >= 9) {
                for (int i = 0; i < concatNum.length(); i++)
                {
                    for (int j = 0; j < 9; j++)
                    {
                        if (concatNum[i] == ar[j]) {
                            ar[j] = 'a';
                            num++;
                        } 
                    }    
                }    
            }
        }

        if (atleast)
            cout << "Number should be atleast three digits" << endl;

        else if (num >= 9)
            cout << "Fascinating" << endl;
            
        else 
            cout << "Not Fascinating" << endl;
        
    }

    return 0;
}