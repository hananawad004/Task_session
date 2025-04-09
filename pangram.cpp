#include <iostream>
#include <set>
#include <cctype> 

using namespace std;

int main() {
    int n;
    cin >> n; 
    string str;
    cin >> str; 
   set<char> l;
   for(int i=0;i<n;i++){
    l.insert(tolower(str[i]));
   }
   if(l.size()==26){
    cout<<"YES";
   }
   else{
    cout<<"NO";
   }
    return 0;
}
