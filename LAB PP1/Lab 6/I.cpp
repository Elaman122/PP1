#include <iostream>

using namespace std;

void ShreK(string s){
    for(int i = 0; i < s.size(); i++){
        if(i % 2 == 0 and (s[i] > 96 and s[i] < 123)){
            s[i] -= 32;
        }
    }
    for(int i = 0; i < s.size(); i++){
        cout << s[i];
    }
}

int main(){
    string s;
    cin >> s;
    ShreK(s);

    return 0;
}