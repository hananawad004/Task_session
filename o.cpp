#include <iostream>
using namespace std;
int a;
void fun(int a, int b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int x = 5;
    while (x-- > a) {
        int u = 5;
         int  static y = 10;
        cout << ++u + y++ << '\n';
        fun(u, y);
        u /= 2, y /= 2, ++a;
    }
    return 0;
}