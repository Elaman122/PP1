#include <iostream>
#include <map>
#include <algorithm>
#include <iterator>

using namespace std;

bool comp(pair <int, int>& a, pair <int, int>& b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    int n;
    cin >> n;

    vector < pair < int, int > > v;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        v.push_back({x,y});
    }

    cout << endl;

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    
    

    return 0;
}