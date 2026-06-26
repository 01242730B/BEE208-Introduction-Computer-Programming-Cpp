#include <iostream>
using namespace std;

int main() {
    float V, total = 0, average;

    cout << "===== Average Voltage Calculator =====" << endl;
    cout << "Enter 10 voltage readings in Volts:" << endl << endl;

    for(int i = 1; i <= 10; i++) {
        cout << "Reading " << i << ": ";
        cin >> V;
        total += V; // same as total = total + V
    }

    average = total / 10.0; // use 10.0 to force decimal division
    cout << "\nAverage Voltage = " << average << " V" << endl;

    return 0;
}