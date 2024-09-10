#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double d, la1, la2, lo1, lo2, er, r;
    cout << "Latitude Coordinate 1: ";
    cin >> la1;
    cout << "Latitude Coordinate 2: ";
    cin >> la2;
    cout << "Longitude Coordinate 1: ";
    cin >> lo1;
    cout << "Longitude Coordinate 2: ";
    cin >> lo2;
    r = 0.0174;
    la1 = la1 * r;
    la2 = la2 * r;
    lo1 = lo1 * r;
    lo2 = lo2 * r;

    er = 6271.01;

    d = er * acos((sin(la1) * sin(la2)) + (cos(la1) * cos(la2) * cos(lo1 - lo2)));
    cout << "The distance between those points is: " << d << "\n";
    return 0;

    
}