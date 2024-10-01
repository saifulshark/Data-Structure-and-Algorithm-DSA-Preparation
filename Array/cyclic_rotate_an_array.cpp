#include <iostream>
using namespace std;

// Function to rotate the array clockwise by one
void rotateClockwise(int arr[], int n) {
    int last = arr[n - 1];  // Store the last element
    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];  // Shift elements to the right
    }
    arr[0] = last;  // Place the last element at the first position
}

// Function to rotate the array anti-clockwise by one
void rotateAntiClockwise(int arr[], int n) {
    int first = arr[0];  // Store the first element
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];  // Shift elements to the left
    }
    arr[n - 1] = first;  // Place the first element at the last position
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int choice;
    cout << "Enter 1 for clockwise rotation, 2 for anti-clockwise rotation: ";
    cin >> choice;

    if (choice == 1) {
        rotateClockwise(arr, n);
    } else if (choice == 2) {
        rotateAntiClockwise(arr, n);
    } else {
        cout << "Invalid choice" << endl;
        return 0;
    }

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
