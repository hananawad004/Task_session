#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int lcm = (a > b) ? a : b; // Start from the larger number
    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            cout << "LCM is: " << lcm << endl;
            break;
        }
        lcm++; // Increment until we find the LCM
    }

    return 0;
}
