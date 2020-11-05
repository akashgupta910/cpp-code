#include <iostream>
using namespace std;

int main () {
    int t;
	cin >> t;
	
	while (t--) {
	    int n;
	    cin >> n;
	    
	    int sum = 0, a;
	    int ar[n];
	    
	    for (int i = 0; i < n; i++) 
        {
	        cin >> ar[i];
            sum += ar[i];
	    }

	    cout << sum << endl;
	}
	
    return 0;
}
