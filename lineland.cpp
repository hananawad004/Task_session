#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        int minDiff, maxDiff;

        // Min difference: Compare with nearest neighbors (if they exist)
        if (i == 0) 
            minDiff = abs(arr[i] - arr[i + 1]);
        else if (i == n - 1) 
            minDiff = abs(arr[i] - arr[i - 1]);
        else 
            minDiff = min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]));

        // Max difference: Always between first and last element
        maxDiff = max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1]));

        cout << minDiff << " " << maxDiff << endl;
    }

    return 0;
}