#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    int curr = n; 

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<bool> fallen(n + 1, false); 
    for (int i = 0; i < n; i++) {
        fallen[v[i]] = true; 

        while (curr > 0 && fallen[curr]) {
            cout << curr << " ";
            curr--; 
        }
        
        cout << endl;
    }

    return 0;
}
