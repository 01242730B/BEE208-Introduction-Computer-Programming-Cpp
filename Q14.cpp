#include <iostream>
using namespace std;

int main() {
    float T, total = 0, average;
    int count = 0;

    cout << "===== Average Temperature - Skip Invalid =====" << endl;
    cout << "Enter 10 readings. Readings < 0°C are skipped" << endl << endl;

    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> T;

        if(T < 0) {
            cout << "Invalid reading skipped" << endl;
            continue; // skip rest, go to next i
        }

        total += T;
        count++;
    }

    if(count > 0) {
        average = total / count;
        cout << "\nAverage of valid readings = " << average << " °C" << endl;
        cout << "Valid readings used: " << count << " out of 10" << endl;
    } else {
        cout << "\nNo valid readings" << endl;
    }

    return 0;
}