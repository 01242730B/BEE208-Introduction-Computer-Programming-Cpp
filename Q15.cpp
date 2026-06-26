#include <iostream>
using namespace std;

int main() {
    float P, total = 0;

    cout << "===== Electrical Load Limit Checker =====" << endl;
    cout << "Max limit: 3000 W. Program stops when exceeded" << endl << endl;

    while(total <= 3000) {
        cout << "Enter appliance power rating in W: ";
        cin >> P;

        total += P;

        if(total > 3000) {
            cout << "Load limit exceeded" << endl;
            cout << "Final total load = " << total << " W" << endl;
        } else {
            cout << "Current total load = " << total << " W" << endl;
        }
    }

    return 0;
}