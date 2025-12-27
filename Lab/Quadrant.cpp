 
#include<iostream>
using namespace std;

int main()
{
    double x, y;
    cout << "Enter x-coordinate: ";
    cin >> x;
    cout << "Enter y-coordinate: ";
    cin >> y;

    if (x == 0 && y == 0)
        cout << "(" << x << ", " << y << ") is at the origin";
    else if (x == 0)
        cout << "(" << x << ", " << y << ") is on the y-axis";
    else if (y == 0)
        cout << "(" << x << ", " << y << ") is on the x-axis";
    else if (x > 0 && y > 0)
        cout << "(" << x << ", " << y << ") is in Quadrant I";
    else if (x < 0 && y > 0)
        cout << "(" << x << ", " << y << ") is in Quadrant II";
    else if (x < 0 && y < 0)
        cout << "(" << x << ", " << y << ") is in Quadrant III";
    else
        cout << "(" << x << ", " << y << ") is in Quadrant IV";

    return 0;
}