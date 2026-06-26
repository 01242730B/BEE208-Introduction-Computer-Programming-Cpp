#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int max_val = (num1 > num2) ? num1 : num2;

    cout << "The larger number is: " << max_val << endl;
    return 0;
}