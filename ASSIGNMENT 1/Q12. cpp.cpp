#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    
    if (num % 2 != 0 && num % 3 == 0)
        cout << "Number is odd and divisible by 3" << endl;
    else
        cout << "Condition not met" << endl;
    return 0;
}