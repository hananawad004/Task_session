#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0, remainder;

    // Input number from user
    cout << "Enter an integer: ";
    cin >> number;

    // Loop to reverse the number
    while (number != 0) {
        remainder = number % 10;                 // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder; // Build the reversed number
        number /= 10;                           // Remove the last digit
    }

    // Output the reversed number
    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}
