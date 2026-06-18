#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long bin;
    int dec = 0, i = 0;
    cout << "Enter binary number: ";
    cin >> bin;
    
    while (bin != 0) {
        int digit = bin % 10;  // get last digit
        dec += digit * pow(2, i);
        bin /= 10;
        i++;
    }
    cout << "Decimal = " << dec << endl;
    return 0;
}