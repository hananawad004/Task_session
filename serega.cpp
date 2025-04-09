#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[1000];
int sums=0;
int sumd=0;
int left=0;
int right=n-1;
bool seraj=true;
for(int i=0;i<n;i++){
    cin>>arr[i];

}
while(left<=right){
    if(arr[right]>arr[left]){
        if(seraj){
        sums+=arr[right];
       
        } 
       
       else{
        sumd+=arr[right];
         
       }
       right--;
    }
       else{
        
            if(seraj){
            sums+=arr[left];
            
            } 
           
           else{
            sumd+=arr[left];
             
           }
            left++; 
        
        
      
       }
      seraj= !seraj;
    }
    cout<<sums <<" "<<sumd<<endl;
}
