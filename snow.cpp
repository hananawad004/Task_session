#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int search(int n,stack s){
    

}
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    stack <int> s;
    int curr=n;
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 for(int i=0;i<n;i++){
    s.push(v[i]);
    while(!s.empty()&&s.top()==curr&&search(curr--,s)){
    cout<<s.top()<<" ";
    s.pop();
    curr--;
    }
    cout<<endl;
 }
}