#include <iostream>
using namespace std;

void fun(int& b, int& a) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int a = 3, b = 7;
    fun(a, b);
    cout << b << ' ' << a << '\n';
    return 0;
}
