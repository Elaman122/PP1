#include <iostream>

using namespace std;

string Conor(string s, int i){
    if(i == s.size()) return 0;
    if(i == s.size() - 1){
        cout << s[i];
    }
    
    else{
    cout << s[i] << '*';
    
    }
    return Conor(s, i+1);
}

int main(){
    string s;
    cin >> s;
    cout << Conor(s, 0);

    return 0;
}