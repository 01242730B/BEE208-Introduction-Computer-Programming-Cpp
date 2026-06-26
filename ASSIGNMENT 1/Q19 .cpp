#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long bin) {
    int dec = 0, i = 0;
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i++);
        bin /= 10;
    }
    return dec;
}

int main() {
    long long bin;
    cout << "Enter binary number: ";
    cin >> bin;
    
    int dec = binaryToDecimal(bin);
    
    cout << "Decimal: " << dec << endl;
    cout << "Hexadecimal: " << hex << dec << endl; // hex format
    cout << "Octal: " << oct << dec << endl;       // octal format
    return 0;
}