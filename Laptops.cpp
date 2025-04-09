#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <pair<int,int>> a(n);
    for(int i=0;i<n;i++){
     cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(),a.end());


    bool alex=false;     
    for(int i=1;i<n;i++){
     if(a[i].second<a[i-1].second){
        alex=true;
        break;
     }
    }
    if(alex){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }
    return 0;
}
