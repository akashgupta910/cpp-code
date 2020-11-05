#include <iostream>
#include <fstream>

using namespace std;


int main () {

    ofstream out ("file.txt");
    out << "create file if not creared and Text is written on file.txt file";
    out.close ();

    ifstream in ("file.txt");
    string data, st;
    // in >> data;

    while (in.eof () == 0)
    {
        getline(in, data);
        cout << data << endl;
    }

    in.close ();
    
    // cout << data;


    // OR
    // ofstream op;
    // op.open ("file.text");
    // op.close ();

    return 0;
}