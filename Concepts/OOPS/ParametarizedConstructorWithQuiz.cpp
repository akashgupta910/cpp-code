#include <iostream>
#include <cmath>

using namespace std;

class Point {

    int x, y;

    friend void PointDistance (Point , Point);

    public: 
        Point (int a, int b) {  // Parameterize Constructor 
            x = a;
            y = b;
        }

        void PrintValue () {
            cout << "The Value is ( " << x << ", " << y << " )" << endl; 
        }
};

void PointDistance (Point p1, Point p2) {

    int a = sqrt((p1.x - p1.y) - (p2.x - p2.y));
    int result = sqrt(a * a);

    cout << "The Distance between " << "( " << p1.x << ", " << p1.y << ") & ( " 
                << p2.x << ", " << p2.y << ") is " << result << endl;   
}

int main () {
    
    Point p1 (1, 1);
    p1.PrintValue ();

    Point p2 = Point (1, 1);
    p2.PrintValue ();

    PointDistance (p1, p2);
    // Point p3;
    // p3.PrintValue ();  // It is necessarty to give argument

    return 0;
}