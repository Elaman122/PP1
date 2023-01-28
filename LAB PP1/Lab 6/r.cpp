#include <iostream>

using namespace std;

string ShreK(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 96 and s[i] < 123){
            s[i] = s[i] - 32;
        }
    }
    return s;
  
}

int main(){
    string s;
    cin >> s;
    
    cout << ShreK(s);
    return 0;
}