#include <iostream>
using namespace std;

int main() {
    float V;

    cout << "===== Battery Test - Stops on Low Battery =====" << endl;
    cout << "Enter up to 10 readings. Test stops if < 10.5V" << endl << endl;

    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> V;

        if(V < 10.5) {
            cout << "Low battery detected. Test stopped." << endl;
            break; // exit loop immediately
        } else {
            cout << "Battery voltage normal" << endl;
        }
    }

    return 0;
}
