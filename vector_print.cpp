#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec{1, 2, 2, 4, 4}; // Vector containing integers
    
    int ans = 0; // Initialize ans to 0
    
    // XOR all elements in the vector
    for (int i=0; i< vec.size(); i++) {
        ans = ans ^ vec[0];  // XOR each element with ans
    }
    
    // Output the result
    cout << "The result of XORing all elements is: " << ans << endl;

    return 0;
}