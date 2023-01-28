#include <iostream>

using namespace std;

string s;

string bani(int n){
    if(n == 0){
        return s;
    }
    s += char((n % 2) + 48);
    return bani(n/2);
}

int main(){
    int n; cin >> n;

    s = bani(n);

    for(int i = s.size() - 1; i >= 0; i--){
        cout << s[i];
    }

    return 0;
}