#include <iostream>
using namespace std;

double power_n(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; ++i) {
        result *= x;
    }
    return result;
}

double power_log(double x, int n) {
    if (n < 0) {
        x = 1 / x;
        n = -n;
    }
    if (n == 0) {
        return 1.0;
    }
    if (n % 2 == 0) {
        double half_power = power_log(x, n / 2);
        return half_power * half_power;
    } else {
        return x * power_log(x, n - 1);
    }
}

int main() {
    double base = 2.0;
    int exponent = 10;

    cout << base << "^" << exponent << " (O(n) method): " << power_n(base, exponent) << endl;
    cout << base << "^" << exponent << " (O(log n) method): " << power_log(base, exponent) << endl;

    return 0;
}
