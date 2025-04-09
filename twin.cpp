#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n], sum = 0;

   
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n, greater<int>());

    int sum1 = 0, c = 0;
    
    for (int i = 0; i < n; i++) {
        sum1 += arr[i];
        c++;
        if (sum1 > sum - sum1) {
            break; 
        }
    }

  
    cout << c;

    return 0;
}
