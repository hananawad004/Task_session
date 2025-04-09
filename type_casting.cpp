#include <iostream>
using namespace std;

int main() {
    double a = 10.7;
    float b = 5.3;
    int c = 3;

    int result1 = a + b;                 
    float result2 = (a / c);      
    double result3 = (int)a + b * c;     
    int result4 = (int)a % c;            

    cout<<a/c<<endl;
    cout  << result1 << endl;
    cout  << result2 << endl;
    cout  << result3 << endl;
    cout  << result4 << endl;

    return 0;
}
