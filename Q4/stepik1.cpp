#include <bits/stdc++.h>

using namespace std;

bool comp(pair <int, int> &a, pair <int, int> &b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}

int main() {
    vector <pair <int, int> > v;
    vector <pair <int, int> > :: iterator it;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end(), comp);

    for(it = v.begin(); it != v.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}