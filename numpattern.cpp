#include <iostream>
using namespace std;

int main() {
    int n = 5;  // Number of rows for the pattern

    int num = 1;

    // Outer loop to handle number of rows
    for (int i = 0; i < n; i++) {

        // Inner loop to handle number of columns
        for (int j = 0; j <= i; j++) {

            // Printing number
            cout << num << " ";

            // Incrementing number at each column
            num = num + 1;
        }

        // Ending line after each row
        cout << endl;
    }

    return 0;
}
