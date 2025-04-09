#include <iostream>
using namespace std;

int counter = 0;  // Global variable

void incrementCounter() {
    counter++;  // Accessing and modifying the global variable
    cout << "Counter: " << counter << endl;
}

int main() {
    incrementCounter(); // Counter: 1
    incrementCounter(); // Counter: 2
    incrementCounter(); // Counter: 3
    return 0;
}
