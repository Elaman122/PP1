#include <bits/stdc++.h>

using namespace std;

bool comp(pair < int, string >& a, pair < int, string>& b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;
    
    vector < pair < int, string > >  v;
    vector < pair < int, string > > :: iterator it;

    for(int i = 0; i < n; i++){
        int x; string s;
        cin >> x >> s;
        v.push_back(make_pair(x, s));
    }

    sort(v.begin(), v.end(), comp);

    for(it = v.begin(); it != v.end(); it++){
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}