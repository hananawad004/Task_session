#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    // Calculate GCD using a loop
    int gcd, tempA = a, tempB = b;
    while (tempB != 0) {
        int remainder = tempA % tempB;
        tempA = tempB;
        tempB = remainder;
    }
    gcd = tempA;

    // Calculate LCM
    int lcm = (a * b) / gcd;

    cout << "LCM is: " << lcm << endl;

    return 0;
}
