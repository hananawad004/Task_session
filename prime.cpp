#include <iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    bool isprime=true;
    for(int i=1;i<x;i++){
     if(x%2==0){
        isprime=false;
        break;
     }
    }
    if(isprime==true){
        cout<<"is prime"<<endl;
    }
    else{
        cout<<"in not prime"<<endl;
    }
}