#include <iostream>
using namespace std;

int main() {
    float R, total = 0;

    cout << "===== Series Resistor Calculator =====" << endl;
    cout << "Formula: R_total = R1 + R2 + R3 + R4 + R5" << endl << endl;

    for(int i = 1; i <= 5; i++) {
        cout << "Enter resistor " << i << " value in Ohms: ";
        cin >> R;
        total = total + R; // or total += R;
    }

    cout << "\nTotal Resistance = " << total << " Ohms" << endl;

    return 0;
}