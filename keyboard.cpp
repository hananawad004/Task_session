#include<iostream>
#include<string>
using namespace std;
inr main(){
char s;
string str;
cin>>s>>str;
 string type="qwertyuiopasdfghjkl;zxcvbnm,./";
 int shift=(s=='R')?-1:1;
 for(char i:str){
    int pos=type.find(i);
    cout<<type[pos+shift];
 }
 return 0;
}