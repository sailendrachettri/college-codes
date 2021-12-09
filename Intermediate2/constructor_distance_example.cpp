// Date: 09 - 12 - 2021
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend void distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void distance(Point, Point);
};

void distance(Point a, Point b)
{
    int val1, val2, dis;

    val1 = (b.x - a.x) * (b.x - a.x);
    cout<< "val1: "<<val1<<endl;
    val2 = (b.y - a.y) * (b.y - a.y);
    cout<< "val2: "<<val2<<endl;
    dis = sqrt(val1 + val2);

    cout << "This distance is " << dis << endl;
}

int main()
{
    Point p(1, 0);
    Point q(70, 0);
    distance(p, q);

    return 0;
}