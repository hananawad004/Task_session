#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Taking input for three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Check if all numbers are equal
    if (num1 == num2 && num2 == num3) {
        cout << "All three numbers are equal." << endl;
    }
    // Check if the first number is greater than the other two
    else if (num1 > num2 && num1 > num3) {
        cout << "The first number is the greatest." << endl;
        
        // Nested if statement to check for specific conditions
        if (num2 > num3) {
            cout << "Second number is greater than the third number." << endl;
        } else {
            cout << "Third number is greater than the second number." << endl;
        }
    }
    // Check if the second number is greater than the other two
    else if (num2 > num1 && num2 > num3) {
        cout << "The second number is the greatest." << endl;
        
        // Nested if statement to check for specific conditions
        if (num1 > num3) {
            cout << "First number is greater than the third number." << endl;
        } else {
            cout << "Third number is greater than the first number." << endl;
        }
    }
    // If none of the above, then the third number must be the greatest
    else {
        cout << "The third number is the greatest." << endl;
        
        // Nested if statement to check for specific conditions
        if (num1 > num2) {
            cout << "First number is greater than the second number." << endl;
        } else {
            cout << "Second number is greater than the first number." << endl;
        }
    }

    // Check for an even or odd number
    if (num1 % 2 == 0) {
        cout << "The first number is even." << endl;
    } else {
        cout << "The first number is odd." << endl;
    }

    if (num2 % 2 == 0) {
        cout << "The second number is even." << endl;
    } else {
        cout << "The second number is odd." << endl;
    }

    if (num3 % 2 == 0) {
        cout << "The third number is even." << endl;
    } else {
        cout << "The third number is odd." << endl;
    }

    return 0;
}