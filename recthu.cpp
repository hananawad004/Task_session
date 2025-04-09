#include<iostream>
using namespace std;
 void messege(int c){
    cout<<c;
    if(c>0){
    cout<<"messege\n";
    messege(c-1);
    }
   cout<<c;
}

int main(){
    messege(5);
}