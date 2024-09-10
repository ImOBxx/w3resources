#include <iostream>
using namespace std;

int main()
{
  float s, a, b, c, A;
  cout << "Enter Side 1 of the Triangle: ";
  cin >> a;
  cout << "Enter Side 2 of the Triangle: ";
  cin >> b;
  cout << "Enter side 3 of the Triangle: ";
  cin >> c;
  s = (a + b + c) / 2;
  A = sqrt(s * (s - a) * (s - b) * (s - c));
  cout << "The Semi- Perimeter of the Scalene Triangle: " << s << endl;
  cout << "Area of the Scalene Triangle: " << A << endl;
}