#include<iostream>

using namespace std;

long long int product(int ar[], int n, long long int mod)
{
    // code here
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            ans += ar[i] * ar[i-1]; 
        }
    }
     
    return ans%mod;
}

int main () {
    int ar[] = {1,2,3,4};
    cout << product (ar, 4, 1) << " And " << sizeof(int(321.3f)) << endl;
    cout << 6 % 2 << endl;
    return 0;
}
