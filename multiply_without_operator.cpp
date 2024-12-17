#include <iostream>

int bitwiseMultiply(int a, int b) {
    int result = 0;
    int multiplicand = a;
    int multiplier = b;
    
    while (multiplier > 0) {
        // If the least significant bit of multiplier is 1
        if (multiplier & 1) {
            // Add the multiplicand to result
            result = result ^ multiplicand;
            int carry = result & multiplicand;
            while (carry != 0) {
                carry = carry << 1;
                result = result ^ carry;
                carry = carry & result;
            }
        }
        
        // Shift multiplicand to the left
        multiplicand = multiplicand << 1;
        
        // Shift multiplier to the right
        multiplier = multiplier >> 1;
    }
    
    return result;
}

int main() {
    int a = 6;
    int b = 8;
    std::cout << "Product of " << a << " and " << b << " is " << bitwiseMultiply(a, b) << std::endl;
    return 0;
}
