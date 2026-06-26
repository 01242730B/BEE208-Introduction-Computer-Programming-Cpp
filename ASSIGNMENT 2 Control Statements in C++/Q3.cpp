#include <iostream>
using namespace std;

int main() {
    float GPA;
    
    cout << "Enter student's GPA: ";
    cin >> GPA;
    
    if (GPA >= 3.5) {
        cout << "Eligible for engineering scholarship" << endl;
    }
    else {
        cout << "Not eligible for engineering scholarship" << endl;
    }
    
    return 0;
}