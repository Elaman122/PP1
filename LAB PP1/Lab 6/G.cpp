#include <iostream>

using namespace std;

void Negr(string s, string t){
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 65 or s[i] != 69 or s[i] != 73 or s[i] != 79 or s[i] != 85){
            s[i] = t[i];
        }
        if(s[i] != 97 or s[i] != 101 or s[i] != 105 or s[i] != 111 or s[i] != 117){
            s[i] = t[i];
        }
    }

    for(int i = 0; i < s.size(); i++){
        cout << t[i];
    }
    
}

int main(){
    string s, t;
    getline(cin, s);

    Negr(s, t);

    return 0;
}