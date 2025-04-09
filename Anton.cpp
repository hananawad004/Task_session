#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>letters;
    string str;
    getline(cin,str);
    for(int i=1;i<str.length()-1;i++){
        if(str[i]!=','){
            letters.insert(str[i]);
        }
        while(i<s.length()&&str[i]!=','){
            i++;
        }
        
    }
    cout<<letters.size();
    
}