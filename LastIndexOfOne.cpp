#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;

        cin >> str;
        int indexOfOne = -1;

        for (int i = 0; i < str.length(); i++)
        {
            if (str.at(i) == '1')
                indexOfOne = i;
        }
        
        cout << indexOfOne << endl;
    }

    return 0;
}