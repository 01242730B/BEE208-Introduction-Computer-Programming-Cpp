#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Enter two floating point numbers: ";
    cin >> a >> b;
    
    double max_val = (a > b) ? a : b;
    cout << "The larger number is: " << max_val << endl;
    return 0;
}
