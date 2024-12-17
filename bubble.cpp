#include <iostream>
#include <vector>
using namespace std;

int bubbleSortSwaps(vector<int> arr, bool ascending) {
    int n = arr.size();
    int swap_count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
                swap_count++;
            }
        }
    }
    return swap_count;
}

int minSwapsToBeautiful(vector<int> arr) {
    // Count swaps needed for ascending order
    int ascending_swaps = bubbleSortSwaps(arr, true);
    
    // Count swaps needed for descending order
    int descending_swaps = bubbleSortSwaps(arr, false);
    
    // Return the minimum of both
    return min(ascending_swaps, descending_swaps);
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int result = minSwapsToBeautiful(arr);
    cout << result; // Remove endl to avoid extra new line

    return 0;
}