#include <iostream>
using namespace std;

int main() {
    int decimal;
    cout << "Enter a decimal number: ";
    cin >> decimal;

    long long binary = 0; // To store the binary result
    int p = 1;        // Tracks the position (units, tens, etc.)

    if (decimal == 0) {
        cout << "Binary equivalent: 0" << endl;
        return 0;
    }

    // Convert decimal to binary using a loop
    while (decimal > 0) {
        int remainder = decimal % 2;   // Get the binary digit
        binary += remainder * p;  // Add the digit at the correct place
        decimal /= 2;                 // Divide by 2 to get the next digit
        p *= 10;                  // Move to the next place (e.g., tens, hundreds)
    }

    cout << "Binary equivalent: " << binary << endl;

    return 0;
}
