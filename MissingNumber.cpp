#include <iostream>

// using namespace std;

// int main()
// {

//     int t;
//     cin >> t;

//     while (t--)
//     {

//         int n;
//         cin >> n;

//         int arr[n - 1], leftNumber = 0;

//         for (int i = 0; i < n - 1; i++)
//         {
//             cin >> arr[i];

//             if (i > 0 && leftNumber == 0) // && arr[i - 1] > arr[i] || arr[i] - arr[i - 1] > 1)
//             {
//                 if (arr[i - 1] > arr[i])
//                     leftNumber = arr[i - 1] + 1;

//                 else if (arr[i] - arr[i - 1] > 1)
//                     leftNumber = arr[i - 1] + 1;

//                 else if (n - 2 == i)
//                 {
//                     if (arr[0] > 1)
//                         leftNumber = arr[0] - 1;
//                     else
//                         leftNumber = n;
//                 }
//             }

//             else if (n - 1 == 1)
//             {
//                 if (arr[i] > 1)
//                     leftNumber = arr[i] - 1;
                    
//                 else if (arr[i] == 1)
//                     leftNumber = arr[i] + 1;
//             }
//         }

//         cout << leftNumber << endl;
//     }

//     return 0;
// }

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int s=0,n,x;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        s+=x;
       
    }
     cout<<(n*(n+1))/2-s<<"\n";
    }
	return 0;
}