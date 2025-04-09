#include <iostream>
using namespace std;

void calculateSum() {
    int sum = 0;  // Local variable
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    cout << "Sum of first 5 numbers: " << sum << endl;
}

int main() {
    calculateSum();
    // cout << sum; // Error: sum is not accessible here.
    return 0;
}
