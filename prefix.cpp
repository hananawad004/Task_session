#include <iostream>
using namespace std;
int main(){
    int a=34;
    int b=21;
    int c=a++ + ++b;
    int d=--a + --b +c--;
    int sum=a+b+c+d;
    //cout<<sum<<endl;
    int x=5;
    cout<<x++<<endl;
    cout<<x<<endl;

}