#include<iostream>
using namespace std;
int main(){
    int n,t,k,d;
    cin>>n>>t>>k>>d;
    int mo1=0;
    int mo2=0;
    while(n-k!==0){//calculate number of min for oven 1
        mo1+=t;
     n-k;
    }
    while(n-2k!==0){  
     mo2+=t;
    }
   int tmo2=mo2+d;
if(mo1<=tmo2){
    cout<<"NO"
}
else{
    cout<<"YES"
}

}