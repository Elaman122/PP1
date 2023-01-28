#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    map <string, int> m;
    map <string, int> :: iterator it;

    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        if(!m[s]){
            m[s] = i;
        }
    }

    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}