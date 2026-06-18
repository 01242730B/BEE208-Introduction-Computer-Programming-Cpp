#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (str == "hello") {
        cout << "Hello!" << endl;
    } else {
        cout << "Goodbye!" << endl;
    }

    return 0;
}