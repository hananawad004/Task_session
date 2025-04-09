#include<iostream>
using namespace std;
int main(){
    long long k,n;
    cin>>n>>k;
    long long no=(n+1)/2;
    if(k<=no){
        cout<<(2*k)-1;
    }
    else{
    cout<<2*(k-no)<<endl;
    }
}