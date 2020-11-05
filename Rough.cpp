#include <iostream>
#include <vector>

using namespace std;

int printVec (vector<int> &vec) {
    int res;
    res = vec[2];
    return res;
}

int main () {

    vector<int> vec;

    vec.push_back (32);
    vec.push_back (645);
    vec.push_back (87);
    vec.push_back (56);

    int a = printVec(vec);
    cout << a << endl;
    
    return 0;
}