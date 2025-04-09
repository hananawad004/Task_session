#include<iostream>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int nos=1;
    while(nos>1){
        int out=k*nos;
        if(out%10==0||out%10==r){
            cout<<out;
            break;
        }
       
    nos++;
    }
}