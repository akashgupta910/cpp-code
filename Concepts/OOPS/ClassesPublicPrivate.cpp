#include <iostream>

using namespace std;

class Animal 
{
    private:
        string owner;
    
    public:
        int weight, price;

        void setData (string owner1, int weight1, int price1);

        void getOwner () {
            cout << "The Owner is " << owner << endl; 
        } 

        void getData () {
            cout << "Owner is -> " << owner << endl; 
            cout << "Weight is -> " << weight << endl; 
            cout << "Price is -> " << price << endl; 
        } 
};

void Animal :: setData(string owner1, int weight1, int price1) {
    owner = owner1;
    weight = weight1;
    price = price1;
}


int main () {
    
    Animal Dog;

    Dog.setData ("John", 25, 8655);

    Dog.weight = 90;
    Dog.price = 3783;

    Dog.getData();



    return 0;
}