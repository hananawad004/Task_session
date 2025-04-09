#include<iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int c=0;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        bool di[10]={false};
        while(num>0){
            int d=num%10;
            di[d]=true;
            num/=10;
        }
        bool isgood=true;
        for(int i=0;i<=k;i++){
            if (di[i]==false){
                isgood=false;
                break;
            }
        }
        if(isgood)
        {
         c++;
        }   
     }
    cout<<c;
}