#include <iostream>
using namespace std;

int main(){

    float r, V;
    cout << "Input Radius: ";
    cin >> r;
    V = (4 * 3.14 * r * r * r) / 3;
    cout << "Volume Of The Sphere: " << V << endl;

}