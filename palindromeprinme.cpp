#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;  // Numbers <= 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {  // Check divisors up to sqrt(num)
        if (num % i == 0) {
            return false;  // If divisible, not a prime
        }
    }
    return true;  // Prime number
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        int digit = num % 10;        // Extract the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        num /= 10;                   // Remove the last digit
    }
    return original == reversed;  // Check if the number equals its reverse
}

int main() {
    int num;

    // Input from user
    cout << "Enter the number: ";
    cin >> num;

    // Check if the number is both prime and palindrome
    if (isPrime(num) && isPalindrome(num)) {
        cout << "The given number is a prime palindrome number" << endl;
    } else {
        cout << "The given number is not a prime palindrome number" << endl;
    }

    return 0;
}
