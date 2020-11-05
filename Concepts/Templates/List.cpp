#include <iostream>
#include <list>

// List is used for fast deletion and insertion

using namespace std;

void Display (list<int> lst) {
    list<int> :: iterator iter;
    for (iter = lst.begin(); iter!=lst.end(); iter++)
    {
        cout << *iter << ' ';
    }
    
}

int main () {

    list<int> list1; 
    list<int> list2;

    list1.push_back (313);
    list1.push_back (78);
    list1.push_back (90);
    list1.push_back (45);
    list1.push_back (54);

    list2.push_front (63);
    list2.push_front (678);
    list2.push_front (98);

    list<int> :: iterator iter;
    iter = list1.begin ();

    // cout << *iter;
    // iter++;

    // cout << *iter;
    // iter++;

    list1.push_front (8);
    list1.pop_back ();
    list1.pop_back ();
    list1.pop_front ();
    list1.remove (78);
    list1.sort ();
    list1.reverse ();
    list2.merge(list1);

    Display (list2);
    
    return 0;
}