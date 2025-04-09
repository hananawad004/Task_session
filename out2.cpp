#include <iostream>
using namespace std;

void fun(int& x, int y) {  //(132,26)
    int a = 0, b = 0;  
    while (x != 0 && y != 0) {  
        a = (x % 10) + a * 10;  //a=2;<=a=23
        b = (y % 10) + b * 10;  //6<=62
        x /= 10;      //  13    //1    
        y /= 10;    // 2       //  0
    }
    x = b, y = a; //x=62 ,y=23
}

int main() {
    int x = 132, y = 26; 

    fun(x, y);  //fun(132,26)
    cout << x << ' ' << y << '\n';  //62,23

    //fun(y, x);  
    //cout << x << ' ' << y << '\n';  

    return 0;
}
