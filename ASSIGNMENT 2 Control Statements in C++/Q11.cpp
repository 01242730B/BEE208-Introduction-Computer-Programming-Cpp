#include <iostream>
using namespace std;

int main() {
    int enteredPass;
    const int correctPass = 2080;

    cout << "===== Control Panel Access =====" << endl;

    cout << "Enter password: ";
    cin >> enteredPass;

    while(enteredPass!= correctPass) {
        cout << "Wrong password. Try again" << endl;
        cout << "Enter password: ";
        cin >> enteredPass;
    }

    cout << "Access granted to control panel" << endl;

    return 0;
}