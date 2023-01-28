#include <iostream>

using namespace std;

void Ggg(string s, int i){
    if(i == s.size()) return;
    if(i < s.size()/2){
        cout << s[i] << "(";
    }else{
    cout << s[i] << ")";
    }
    return Ggg(s, i+1);
}

int main(){
    string s;
    cin >> s;

    Ggg(s, 0);
    return 0;
}