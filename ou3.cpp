#include <iostream>
using namespace std;

void fun1(int& y, int x) {//(2,7)
    y += x;//y=9
    cout << ++x << ' ' << y++ << '\n';//8,9
    //y=10
}

void fun(int& y, int& x) {//(7,10)
    cout << ++x << ' ' << ++y << '\n';//2,7
    fun1(x, y);//(2,7)
   //10,7
}

int main() {
    int x = 1, y = 6;
    fun(y, x);//(
    cout << x << ' ' << y << '\n';
    return 0;
}
