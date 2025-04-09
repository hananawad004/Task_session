#include<iostream>
#include<string>
using namespace std;
int main(){

string str;
cin>>str;
int c=0;
sort(str.begin(), str.end());
for(int i=0;i<str.length;i++){
if(str[i]==str[i+1])
str
c++;
}
int m=str.length;
int h=m-c;
if(h%2==0){
    cout<<"CHAT WITH HER!"<<endl;

}
else{
    cout<<"IGNORE HIM!"<<endl;
}
    return 0;
}