#include <iostream>
using namespace std;

int main()
{
    float s1, s2, s3;
    cout << "Enter 1st Angle of the Triangle: ";
    cin >> s1;
    cout << "Enter 2nd Angle of the Triangle: ";
    cin >> s2;
    s3 = 180 - (s1 + s2); 
    cout << "Triangle's Thrid Angle: " << s3 << endl;

}