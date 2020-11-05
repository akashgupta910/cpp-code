#include <iostream>

using namespace std;

// Templates with Multiple Parameters and also we can give it default parameter
// We can also use vector in function exact same as we use in class


// template <class V1, class V2>
template <class V1 = float, class V2 = string>

class Vector {

    protected:
        int size;

    public:

        V1 * arr;
        V2 heading;

        Vector (int size) {
            this->size = size;
            arr = new V1 [this->size];
        }

        V1 sum (Vector &v) {
            V1 res = 0;

            for (int i = 0; i < size; i++)
            {
                res += arr[i] + v.arr[i];
            }

            return res;
        }

        string Intro () {
            V2 heading = "Hello, This is the Intro of Vector";
            return heading;
        }
};


template <class V3>
void printFunc (V3 a) {  // Now we can pass any kind of data types
    cout << a << endl;
}


int main () {

    // Vector obj1 (3);
    // obj1.arr[0] = 2;
    // obj1.arr[1] = 3;
    // obj1.arr[2] = 4;
    
    // Vector obj2 (3);
    // obj2.arr[0] = 3;
    // obj2.arr[1] = 4;
    // obj2.arr[2] = 5;

    // int a = obj1.sum (obj2);
    // cout << a << endl;

    // Leave it blank when you are satisfied with default parameter like this
    // Vector<> obj1 (3);

    Vector<float, string> obj1 (3); 
    obj1.arr[0] = 2.3;
    obj1.arr[1] = 3.5;
    obj1.arr[2] = 4;
    
    Vector <float, string>  obj2(3);
    obj2.arr[0] = 3;
    obj2.arr[1] = 4.87;
    obj2.arr[2] = 5.6;

    float a = obj1.sum (obj2);
    cout << a << endl;

    cout << obj2.Intro () << endl;

    printFunc ("dasfaf");

    return 0;
}