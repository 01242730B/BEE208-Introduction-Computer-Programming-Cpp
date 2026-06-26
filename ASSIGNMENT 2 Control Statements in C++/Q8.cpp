#include <iostream>
using namespace std;

int main() {
    float I;
    int safeCount = 0, unsafeCount = 0;

    cout << "===== Count Safe Current Readings =====" << endl;
    cout << "Safe = 10 A or below. Enter 8 readings:" << endl << endl;

    for(int i = 1; i <= 8; i++) {
        cout << "Reading " << i << ": ";
        cin >> I;

        if(I <= 10) {
            safeCount++;
        } else {
            unsafeCount++;
        }
    }

    cout << "\nSafe readings: " << safeCount << endl;
    cout << "Unsafe readings: " << unsafeCount << endl;

    return 0;
}