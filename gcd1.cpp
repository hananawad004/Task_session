#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int min_num = (a < b) ? a : b; // Find the smaller of the two numbers
    int gcd = 1; // Default GCD is 1

    for (int i = min_num; i >= 1; i--) {
        
        if (a % i == 0 && b % i == 0) {
            gcd = i; // Update GCD when a common divisor is found
            break; // Exit the loop after finding the largest divisor
        }
    }

    cout << "The GCD is: " << gcd << endl;
    return 0;
}

