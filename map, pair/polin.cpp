#include <iostream>
#include <algorithm>

using namespace std;

bool Pol(string s, string k){
    if(s == k){
        return true;
    }else
    return false;
}

int main(){
    string s, k;
    cin >> s;
    k = s;
    reverse(k.begin(), k.end());
    
    if(Pol(s,k) == true){
        cout << "true";
    }else
    cout << "false";

    return 0;
}