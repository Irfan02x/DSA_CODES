#include <iostream>
using namespace std;

// Function to print the frequency of each element
void printFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        // Skip duplicate elements
        bool alreadyCounted = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted) {
            continue;
        }

        // Count frequency of arr[i]
        int count = 1;
        for (int k = i + 1; k < n; k++) {
            if (arr[k] == arr[i]) {
                count++;
            }
        }

        // Print the result
        cout << arr[i] << " -> " << count << endl;
    }
}

int main() {
    // Declaring an array of integers
    int arr[] = { 10, 20, 20, 10, 30, 40, 10, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Printing the frequency of elements
    cout << "Frequency of elements in the array is: " << endl;
    printFrequency(arr, n);

    return 0;
}
