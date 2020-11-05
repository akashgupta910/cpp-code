#include <iostream>
#include <vector>

using namespace std;

template <class V>
void PrintVector (vector <V> vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }

    cout << endl;
}


int main () {

    vector <int> vec1;

    vector <int> vec2 (4);
    PrintVector (vec2);

    vector <int> vec3 (6, 21);
    PrintVector (vec3);
    
    vec2.swap (vec3);
    PrintVector (vec2);

    // int size;
    // cin >> size;

    // for (int i = 0; i < size; i++)
    // {
    //     int elem;
    //     cout << "Enter element " << i + 1 << " : ";
    //     cin >> elem;
    //     vec1.push_back (elem);
    // }
    
    // // vec1.pop_back ();
    
    // vector <int> :: iterator iter = vec1.begin ();  // point to first element of vec1 vector
    // vec1.insert (iter + 1, 200, 432);

    // PrintVector (vec1);
    
    return 0;
}