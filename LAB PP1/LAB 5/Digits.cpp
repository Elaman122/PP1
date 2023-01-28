#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == s[i+1] or s[i] == s[i+2]){
            cout << "YES";
            return 0;
        }
        
    }
    cout << "NO";
    return 0;
}