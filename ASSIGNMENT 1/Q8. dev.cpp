#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer value: ";
    cin >> num;

    if (num % 2 != 0) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }

    return 0;
}