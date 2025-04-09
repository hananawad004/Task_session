#include <iostream>
using namespace std;

int GCD(int a,int b){
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

   return a;

}
int main() {
    int a, b;
    cin >> a >> b;
    int gcd=GCD(20,25);
    cout<<gcd;

    // // Ensure a >= b for simplicity
    // if (a < b) {
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }

    // while (b != 0) {
    //     int remainder = a % b;
    //     a = b;
    //     b = remainder;
    // }

    // cout << "GCD is: " << a << endl;

    return 0;
}
