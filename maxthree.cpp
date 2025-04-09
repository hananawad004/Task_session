#include <iostream>
using namespace std;

// The existing max method from Question 2
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Method to find the maximum of three numbers using the max function
int maxOfThree(int x, int y, int r) {
    // First, compare x and y, then compare the result with r
    int maxXY = max(x, y);    // Maximum between x and y
    return max(maxXY, r);      // Maximum between the result and r
}

int main() {
    int x, y, r;
    cout << "Enter three numbers: ";
    cin >> x >> y >> r;  // Read three numbers

    // Find the maximum of the three numbers using the maxOfThree method
    int result = maxOfThree(x, y, r);

    // Output the result
    cout << "Max = " << result << endl;

    return 0;
}
