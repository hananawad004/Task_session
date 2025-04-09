#include <iostream>
using namespace std;
int main(){
    char ch;//digit or letter
    cin>>ch;
 //let start with digit
 if(ch>'0'&&ch<='9'){
    cout<<"digit"<<endl;
 }
 else if(ch >=char(65)&&ch<='Z'){
    cout<<"uppercase"<<endl;
 }
 else if(ch>='a'&&ch<='z'){
  cout<<"lower"<<endl;
 }
else{
    cout<<"not digit not letter"<<endl;
}
return 0;
}
