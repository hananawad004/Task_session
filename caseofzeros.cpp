#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    stack<char> s;
     for(char c: str){
        if(!s.empty()&&s.top()!=c){
            s.pop();
        }
        s.push(c);
     }
     cout<<s.size();
     return 0;
}