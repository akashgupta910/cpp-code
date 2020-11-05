#include <iostream>
#include <vector>

using namespace std;

int printLargest(vector<string> &arr) {

    int res;

	vector<int> intVec;

    for (int i = 0; i < arr.size(); i++)
    {
        intVec.push_back(atoi(arr.at(i).c_str()));
    }

    for (int i = 0; i < intVec.size; i++)
    {
        if (intVec.at(i))
    }
    
           
	return res;
}

int main () {

    vector <string> vec;

    vec.push_back ("32");
    vec.push_back ("87");
    vec.push_back ("98");
    vec.push_back ("43");

    cout << printLargest (vec) << endl;
    
    return 0;
}