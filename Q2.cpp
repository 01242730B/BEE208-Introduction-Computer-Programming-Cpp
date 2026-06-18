#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.141592653589793;
    
    cout << "Enter the radius: ";
    cin >> radius;

    // Calculating squared radius using multiplication or pow()
    double area = PI * pow(radius, 2);

    cout << "Area of the circle: " << area << endl;
    return 0;
}