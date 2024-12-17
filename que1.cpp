#include <iostream>
using namespace std;

int findMinElement(int arr[], int size) {
    int minValue = arr[0];  // Initialize minValue with the first element of the array
    for (int i = 1; i < size; i++) {  // Start loop from the second element
        if (arr[i] < minValue) {
            minValue = arr[i];  // Update minValue if a smaller element is found
        }
    }
    return minValue;  // Return the minimum value found
}

int main() {
    const int SIZE = 6;  // Define the size of the array
    int arr[SIZE];       // Declare the array with the defined size

    // Input elements into the array
    cout << "Enter " << SIZE << " elements: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }
    
    // Find the minimum element using the custom function
    int minValue = findMinElement(arr, SIZE);
    
    // Print the minimum value
    cout << "The minimum element is: " << minValue << endl;

    return 0;
}
