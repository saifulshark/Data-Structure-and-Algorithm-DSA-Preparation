#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 4, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<sizeof(arr)<<endl;
    cout<<sizeof(arr[0])<<endl;
    // Print the array before sorting
    cout << "Before sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insertion Sort Algorithm
    for (int i = 0; i < n-1; i++) { // Start from the second element
        for (int j = i; j > 0; j--) { // Compare with previous elements
            if (arr[j] < arr[j - 1]) {
                // Swap arr[j] and arr[j-1]
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            } else {
                break; // Stop if no more swaps are needed
            }
        }
    }

    // Print the array after sorting
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
