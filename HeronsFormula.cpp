#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    float s1, s2, s3, area, s;
    cout << "Input 1st Side: ";
    cin >> s1;
    cout << "Input 2nd Side: ";
    cin >> s2;
    cout << "Input 3rd Side: ";
    cin >> s3;
    s = (s1 + s2 + s3) / 2;
    area = sqrt(s * (s - s1) * (s - s2) * (s - s3));
    cout << "Area Of A Triangle: " << area << endl;
     
}