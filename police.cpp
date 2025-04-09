#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int a1 = 0, a2 = 0, a3 = 0;
    int p[5000], m[5000], a[5000]; 
    

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            p[a1++] = i + 1; 
        } else if (arr[i] == 2) {
            m[a2++] = i + 1;
        } else if (arr[i] == 3) {
            a[a3++] = i + 1;
        }
    }

   
    int teams = min({a1, a2, a3});
    cout << teams << endl;

   
    for (int i = 0; i < teams; i++) {
        cout << p[i] << " " << m[i] << " " << a[i] << endl;
    }

    return 0;
}
