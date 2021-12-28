#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;
    friend float distance(Point, Point);

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is : (" << x << "," << y << ")" << endl;
    }
};
float distance(Point obj1, Point obj2)
{
    return sqrt(pow(obj2.x - obj1.x, 2) + pow(obj2.y - obj1.y, 2));
}
int main()
{
    float dist;
    Point p(1, 1), q(4, 6);
    p.displayPoint();
    q.displayPoint();

    dist = distance(p, q);

    cout << "Distance between the points is: " << dist;
    return 0;
}