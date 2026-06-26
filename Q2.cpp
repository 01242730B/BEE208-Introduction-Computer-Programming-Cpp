#include <iostream>
using namespace std;

int main() {
    float ratedCurrent, measuredCurrent;
    
    cout << "Enter rated current of circuit breaker (A): ";
    cin >> ratedCurrent;
    
    cout << "Enter measured current in circuit (A): ";
    cin >> measuredCurrent;
    
    if (measuredCurrent < 0 || ratedCurrent <= 0) {
        cout << "Invalid current reading" << endl;
    }
    else if (measuredCurrent > ratedCurrent) {
        cout << "Overload! Circuit breaker will TRIP" << endl;
        cout << "Measured: " << measuredCurrent << " A > Rated: " << ratedCurrent << " A" << endl;
    }
    else if (measuredCurrent == ratedCurrent) {
        cout << "At rated limit: " << measuredCurrent << " A" << endl;
        cout << "Circuit is at maximum safe load" << endl;
    }
    else {
        cout << "Safe / Normal load" << endl;
        cout << "Measured: " << measuredCurrent << " A < Rated: " << ratedCurrent << " A" << endl;
    }
    
    return 0;
}