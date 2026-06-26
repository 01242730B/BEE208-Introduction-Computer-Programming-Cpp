#include <iostream>
using namespace std;

int main() {
    float V;

    cout << "===== Battery Voltage Monitoring =====" << endl;
    cout << "Enter voltage readings. Stops when < 12 V" << endl << endl;

    cout << "Enter battery voltage reading in V: ";
    cin >> V;

    while(V >= 12) {
        cout << "Voltage OK: " << V << " V" << endl;
        cout << "Enter next voltage reading in V: ";
        cin >> V;
    }

    cout << "Battery voltage low. Recharge required." << endl;

    return 0;
}