#include<iostream>
#include <set>
using namespace std;
int main(){
    int arr[4];
    set<int>seen;
    set<int>repeated;
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
        if(seen.count(arr[i])){//return 1 if exixt
         repeated.insert(arr[i]);
        }
        seen.insert(arr[i]);

    }
    cout<<repeated.size();
}