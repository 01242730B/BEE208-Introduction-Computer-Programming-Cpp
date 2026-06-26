#include <iostream>
using namespace std;

int main() {
    float I;

    cout << "===== Current Monitoring System =====" << endl;
    cout << "Enter current readings. Program stops when > 10 A" << endl << endl;

    cout << "Enter current reading in A: ";
    cin >> I;

    while(I <= 10) {
        cout << "Safe reading: " << I << " A" << endl;
        cout << "Enter next current reading in A: ";
        cin >> I;
    }

    cout << "Overcurrent detected. Monitoring stopped." << endl;

    return 0;
}