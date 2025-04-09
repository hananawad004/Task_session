#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count1=0,c2=0;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int mi=arr[0];
    int ma=arr[n-1];
    if(n<=2){
       cout<< count1;
       return 0;
    }
     for(int i=0;i<n;i++){
         if(arr[i]==mi){
             count1++;
         }
         if(arr[i]==ma){
             c2++;
         }
     }
 int result = n - count1 - c2;
    cout << (result > 0 ? result : 0);

}