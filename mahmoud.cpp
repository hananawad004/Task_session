#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1,str2;
    string str,st;
    for(int i=0,j=0;i<str1.length(),j<str2.length();i++,j++){
        if(str1.at(i)!=str2.at(j)){
         str+=(str1.at(i));
         st+=(str1.at(j));

        }
    }
    if(str.length()>st.length()){
        cout<<str1.length();
    }
    else if(str.length()<st.length()){
        cout<<str.length();
    }
    else{
        cout<<-1<<endl;
    }
}