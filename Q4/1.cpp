#include <bits/stdc++.h>

using namespace std;





int main(){
    string s;
    
    map <string, int> m;
    map <string, int> :: iterator it;
    while(cin >> s){
        m[s]++;
        if(cin.get() == '\n'){
            break;
        }
    }
    
    vector < pair <string, int > > v;
    for(it = m.begin(); it != m.end(); it++){
        v.push_back(make_pair(it->first, it->second));
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " : " << v[i].second << endl;
    }
    return 0;
}