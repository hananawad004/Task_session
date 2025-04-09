#include <iostream>
using namespace std;
double power(double i,int exponent){
    double result=1.0;
for (int j = 1; j <= exponent; ++j) {
        result *= i; 
    }
    return result;
    }


long long factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}


double calculate(double x, int terms) {
    double sum = 1.0; 
    for (int i = 1; i < terms; i++) {
        sum += (power(x, i) / factorial(i));
    }
    return sum;
}

int main() {
    double x;
    int terms;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the number of terms in the series: ";
    cin >> terms;

    
    double result = calculate(x, terms);

    
    cout << "The value of e^" << x << " is: " << result << endl;

    return 0;
}
