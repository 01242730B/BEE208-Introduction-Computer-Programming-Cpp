#include <iostream>
using namespace std;

int main() {
    int choice;
    float V, I, P, T, result;

    cout << "===== Power Rating Menu =====" << endl;
    cout << "1. Calculate DC Power" << endl;
    cout << "2. Calculate Resistance using Ohm's Law" << endl;
    cout << "3. Calculate Energy Consumption" << endl;
    cout << "Enter your choice 1-3: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Enter Voltage (V) and Current (A): ";
            cin >> V >> I;
            result = V * I;
            cout << "DC Power = " << result << " W" << endl;
            break;

        case 2:
            cout << "Enter Voltage (V) and Current (A): ";
            cin >> V >> I;
            if (I!= 0) {
                result = V / I;
                cout << "Resistance = " << result << " Ohms" << endl;
            } else {
                cout << "Error: Current cannot be zero" << endl;
            }
            break;

        case 3:
            cout << "Enter Power (W) and Time (s): ";
            cin >> P >> T;
            result = P * T;
            cout << "Energy Consumption = " << result << " J" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}