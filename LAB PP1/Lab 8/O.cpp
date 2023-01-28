#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    set <int> s1;
    set <int> :: iterator it;

    for(int i = 0; i < s.size(); i++){
        if(int(s[i]) > 64 and int(s[i]) < 91){
            s1.insert(int(s[i]) + 32);
        }else
        s1.insert(int(s[i]));
    }
    cout << s1.size() << endl;
    for(it = s1.begin(); it != s1.end(); it++){
        cout << char(*it) << " ";
    }

    return 0;
}