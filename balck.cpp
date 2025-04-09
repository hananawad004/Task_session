#include<iostream>
using namespace std;
int main() {
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    int summ = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char c = str.at(i);
        int x = c-'0';
        if (x == (a1)) {
            summ += a1;
        }
        if (x == (a2)) {
            summ += a2;
        }
        if (x == (a3)) {
            summ += a3;
        }
        if (x == (a4)) {
            summ += a4;
        }
    }
}