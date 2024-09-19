#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input values for a and b
    cout << "Enter two numbers (a, b): ";
    cin >> a >> b;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    // Swap without using extra variable
    a = a + b; // Step 1: a now holds the sum of a and b
    b = a - b; // Step 2: b now holds the original value of a
    a = a - b; // Step 3: a now holds the original value of b

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
