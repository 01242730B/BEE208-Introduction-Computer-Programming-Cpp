#include <iostream>
using namespace std;

int main() {
    int choice;
    float V, I, P, t, R, E;

    cout << "===== Menu-Driven Electrical Calculator =====" << endl;

    do {
        cout << "\n1. Calculate Power" << endl;
        cout << "2. Calculate Resistance" << endl;
        cout << "3. Calculate Energy" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter Voltage V and Current I: ";
                cin >> V >> I;
                P = V * I;
                cout << "Power = " << P << " W" << endl;
                break;
            case 2:
                cout << "Enter Voltage V and Current I: ";
                cin >> V >> I;
                R = V / I;
                cout << "Resistance = " << R << " O" << endl;
                break;
            case 3:
                cout << "Enter Power P and Time t: ";
                cin >> P >> t;
                E = P * t;
                cout << "Energy = " << E << " J" << endl;
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid option. Try again." << endl;
        }
    } while(choice!= 4);

    return 0;
}