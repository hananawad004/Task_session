#include <iostream>
using namespace std;

int main() {
    int base, exponent;
    long long result = 1; // To store the result

    // Input base and exponent
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    // Loop to calculate power
    for (int i = 1; i <= exponent; ++i) {
        result *= base; // Multiply the base repeatedly
    }

    // Output the result
    cout << base << "^" << exponent << " = " << result << endl;

    return 0;
}
