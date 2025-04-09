#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    bool flag=true;
    char mtx[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mtx[i][j];
            if (mtx[i][j]=='C'||mtx[i][j]=='M'||mtx[i][j]=='Y'){
               flag=false;
            }

        }
    }
    if(flag){
        cout<<"#Black&White";
    }
    else{
        cout<<"#Color";
    }

return 0;
}