#include <iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        
        if(char(s[i]) == 'z'){
            cout << 'a';
        }
        if(char(s[i]) == 'Z'){
            cout << 'A';
        }
        if(s[i] > 64 and s[i] < 90 or s[i] > 96 and s[i] < 122){
            cout << char(s[i] + 1);
        }else if(s[i] != 'z' and s[i] != 'Z'){
            cout << s[i];
        }
        
        
        
    }

    return 0;
}