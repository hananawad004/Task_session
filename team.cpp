#include<iostream>
using namespace std;
int main(){
int n=0;
int f0=0,f1=0;
int mtx[n][3];
cin>>n;
for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        cin>>mtx[i][j];
    }
}
for(int i=0;i<n;i++){
    f1=0;
    for(int j=0;j<3;j++){
        if(mtx[i][j]==1){
            f1++;
        }
       

    }
    if(f1>=2){
    f0++;
}
}

cout<<f0<<endl;


    return 0;
}