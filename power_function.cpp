#include <iostream>
using namespace std;

double power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    
    if (exponent < 0) {
        return 1.0 / power(base, -exponent);
    }
    
    if (exponent % 2 == 0) {
        double halfPower = power(base, exponent / 2);
        return halfPower * halfPower;
    } else {
        return base * power(base, exponent - 1);
    }
}

int main() {
    int base;
    int exponent;
    
    cout << "Enter the base: ";
    cin >> base;
    
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    double result = power(base, exponent);
    cout << base << " raised to the power of " << exponent << " is " << result << endl;
    
    return 0;
}