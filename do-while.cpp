#include<iostream>
 using namespace std;

int main(){
 int x = 7, sum = 0;
        // Do-while loop
        do {

            sum += x;
            cout<<sum<<endl;
            x--;
        }
 
        while (x > 0);
    cout<<sum<<endl;    
    return 0;
}