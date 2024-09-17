#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reversed = reversed * 10 + digit;  // Add it to the reversed number
        num /= 10;  // Remove the last digit from the original number
    }
    
    return reversed;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Reversed number: " << reverseNumber(num) << endl;
    
    return 0;
}
