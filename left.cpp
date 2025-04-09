#include<iostream>
using namespace std;
int main(){
    int l,r,a;
    cin>>l>>r>>a;
    int sum=0;
    while(a){
    if((l+r)%2==0){
    sum+=(l+r);
    }
    else{
        sum+=(l+r);
    a--;
    }
    }
    cout<<sum<<endl;
    return 0;
}