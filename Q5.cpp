#include <iostream>
using namespace std;

int main() {
    int val1, val2;
    cout << "Enter two integer values: ";
    cin >> val1 >> val2;

    if (val1 > val2) {
        cout << "First value is greater" << endl;
    } else {
        cout << "Second value is greater" << endl;
    }

    return 0;
}