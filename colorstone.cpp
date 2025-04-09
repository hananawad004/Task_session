#include<iostream>
#include<string>
using namespace std;
int main(){
    string color;
    string inc;
    int pos=0;
    for(int i=0;i<inc.length();i++){
        for(int j=0;j<color.size;j++){
            if(color[i]==inc[i]){
                color[i]=color[i+1];
            }
            else{
                color[i]=color[i];
            }

        }
    }
    cout<<pos+1;
}