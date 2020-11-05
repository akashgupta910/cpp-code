#include <iostream>
#include <map>
#include <string>

using namespace std;

int main () {

    map<string, int> mapData;

    mapData["Akash"] = 314;
    mapData["Mike"] = 646;
    mapData["Tyson"] = 577;

    mapData.insert({{"Roman", 768}, {"Seth", 987}});
    map<string, int> :: iterator iter;

    for (iter = mapData.begin(); iter!=mapData.end(); iter++)
    {
        cout << (*iter).first << " : " << (*iter).second<< endl;
    }

    cout << mapData.size() << endl;
    cout << mapData.max_size() << endl;
    cout << mapData.empty() << endl;
    
    
    return 0;
}