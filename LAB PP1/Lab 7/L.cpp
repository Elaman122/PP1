#include <iostream>
#include <algorithm>

using namespace std;

bool isPolimdrome(string s, string t, int i = 0){
    if(s.size() == i){
        return false;
    }
    if(s[i] == t[i]){
        return true;
    }
    if(s[i] != t[i]){
        return false;
    }
    return isPolimdrome(s, t, ++i);
}

int main(){
    string s;
    cin >> s;
    string t;
    reverse(s.begin(), s.end());

    t = s;

    reverse(s.begin(), s.end());

    if(isPolimdrome(s,t)){
        cout << "Yes";
    }else
    cout << "No";

    
    
    
    

    return 0;
}