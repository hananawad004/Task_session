#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;  
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false; 
        }
    }
    return true;  
}

void printPrimesInRange(int start, int end) {
    for (int num = start; num <= end; ++num) {
        if (isPrime(num)) {
            cout << num << " ";  
        }
    }
    cout << endl;
}

int main() {
    int start, end;

    cout << "Enter two numbers (start and end): ";
    cin >> start >> end;

    cout << "Prime numbers between " << start << " and " << end << " are: ";
    printPrimesInRange(start, end);

    return 0;
}
