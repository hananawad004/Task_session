#include <iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return n;
    }
    else{
        cout<<fun(n-1);
        cout<<n;
        return n;
    }
}
int main(){
fun(4);
 return 0;
}