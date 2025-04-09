#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    long long binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int position = 0; // Keeps track of the binary place value

    // Convert binary to decimal
    while (binary != 0) {
        int digit = binary % 10; 
        decimal += digit * pow(2, position); 
        binary /= 10; // Remove the last digit
        position++; // Move to the next binary place value
    }

    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
