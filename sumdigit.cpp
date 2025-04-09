#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        sum += digit;         // Add it to the sum
        num /= 10;            // Remove the last digit
    }

    cout << "Sum of digits: " << sum << endl;

    return 0;
}
