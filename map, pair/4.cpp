#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    map <string, string> m;
    map <string, string> :: iterator it;

    for(int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        m[s1] = s2;
    }

    string s;
    cin >> s;

    
    if(m.find(s) == m.end()){
            cout << -1;
    }else
        cout << m[s];
    

    return 0;
}