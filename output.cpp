#include <iostream>
using namespace std;
int calc(int &);
int Calc(int& x) { 
    while (!(x % cnt)) {  
        x /= cnt;  
    }
    return x; 
}

int cnt = 2;  

int main() {
    int x = 180;  

    cout << Calc(x) << '\n';  
    cnt++;  
    cout << Calc(x) << '\n';  
    cnt++;  
    cnt++;  

    cout << Calc(x) << '\n';  
    cout << (x == 1 ? "YES\n" : "NO\n");  /

    return 0;
}
