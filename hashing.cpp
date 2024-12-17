#include <iostream>
using namespace std;

void printFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
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

        int count = 1;
        for (int k = i + 1; k < n; k++) {
            if (arr[k] == arr[i]) {
                count++;
            }
        }

        cout << arr[i] << " -> " << count << endl;
    }
}

int main() {
    int arr[] = { 10, 20, 20, 10, 30, 40, 10, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Frequency of elements in the array is: " << endl;
    printFrequency(arr, n);

    return 0;
}
