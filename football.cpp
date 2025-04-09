#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string te1, te2, str;
    int t1 = 0, t2 = 0;

    cin >> te1;
    t1++; 

    for (int i = 1; i < n; i++) { 
        cin >> str;
        if (str == te1) {
            t1++;
        } else {
            te2 = str; 
            t2++;
        }
    }

    cout << (t1 > t2 ? te1 : te2) << endl;

    return 0;
}
