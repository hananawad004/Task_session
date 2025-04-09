#include <iostream>
using namespace std;

void generateUniqueID() {
    static int id = 1000;  // Static variable
    id++;                  // Retains its value between calls
    cout << "Generated ID: " << id << endl;
}

int main() {
    generateUniqueID(); // Generated ID: 1001
    generateUniqueID(); // Generated ID: 1002
    generateUniqueID(); // Generated ID: 1003
    return 0;
}
