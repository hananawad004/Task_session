#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num; ++i) {  
        if (num % i == 0) return false;
    }
    return true;
}


int nextPrime(int num) {
    int next = num + 1; 
    while (!isPrime(next)) {
        ++next;
    }
    return next;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int primeCount = 0;
    int maxNumber = 0;

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        
        if (isPrime(num)) {
            primeCount++;
        }

        if (num > maxNumber) {
            maxNumber = num;
        }
    }

    if (primeCount > 0) {
        cout << "Output: " << primeCount << endl;
    } else {
        cout << "Output: " << nextPrime(maxNumber) << endl;
    }

    return 0;
}
