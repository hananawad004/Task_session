#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    char mts[n][n];
    
    // قراءة المصفوفة
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mts[i][j];
        }
    }

    char diag = mts[0][0]; // حرف القطر
    char other = mts[0][1]; // حرف الحواف (يفترض أن يكون مختلفًا عن القطر)

    // التحقق من أن القطرين متساويان
    for (int i = 0; i < n; i++) {
        if (mts[i][i] != diag || mts[i][n - i - 1] != diag) {
            cout << "NO" << endl;
            return 0;
        }
    }

    // التحقق من أن باقي العناصر ليست جزءًا من القطرين وتحتوي على نفس الحرف "other"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && j != (n - i - 1)) {
                if (mts[i][j] != other || other == diag) {
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }

    // إذا تحقق كل شيء
    cout << "YES" << endl;
    return 0;
}
