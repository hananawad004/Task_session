#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    int pa,pb;
    bool israte=false,unrate=false;
    cin>>pa>>pb;
    if(pa!=pb){
        israte=true;
    }
    
    for(int i=1;i<n;i++){
     cin>>a>>b;
     if(a!=b){
        israte=true;
     }
     else if(a==b){
     if(a>pa){
     unrate=true;
     }
    }
    pa=a;
    }
    
    
    if(israte){
        cout<<"rated";
    }
    else if(unrate){
        cout<<"unrated";
    }
    else{
        cout<<"maybe";
    }
    return 0;
}
