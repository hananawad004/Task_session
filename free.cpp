#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    long long noc;
    cin>>n>>noc;
     cin.ignore();  // Ignore newline after integer input

    int s=0;
    
    string arr[n];
    for(int i=0;i<n;i++){
     getline(cin,arr[i]);
    }
    for(int i=0;i<n;i++){
        string str=arr[i];
         int b=stoi(str.substr(2));
        if(str.at(0)=='+'){
         
            noc+=b;
        }
        else if(str.at(0)=='-'){
            if(noc>=b){
                noc-=b;
            }
            else{
            s++;
            }

        }
    }
    cout<<noc<<" "<<s<<endl;

}