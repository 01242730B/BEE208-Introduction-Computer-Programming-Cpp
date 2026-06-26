#include <iostream>
using namespace std;

int main() {
    float voltage;
    
    cout << "Enter voltage reading in Volts: ";
    cin >> voltage;
    
    if (voltage < 0) {
        cout << "Invalid voltage reading: " << voltage << " V" << endl;
    }
    else if (voltage >= 0 && voltage <= 50) {
        cout << "Low voltage: " << voltage << " V" << endl;
    }
    else if (voltage >= 51 && voltage <= 240) {
        cout << "Normal voltage: " << voltage << " V" << endl;
    }
    else if (voltage >= 241 && voltage <= 415) {
        cout << "High voltage: " << voltage << " V" << endl;
    }
    else {
        cout << "Dangerous voltage: " << voltage << " V" << endl;
    }
    
    return 0;
}