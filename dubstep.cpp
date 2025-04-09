#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;  

   
    while (str.find("WUB") != string::npos) {  
        str.replace(str.find("WUB"), 3, " "); 
        
    }

 
    while (!str.empty() && str.front() == ' ') {
        str.erase(0, 1);
    }

    
    while (!str.empty() && str.back() == ' ') {
        str.pop_back();
    }

  
    cout << str << endl;
    return 0;
}
