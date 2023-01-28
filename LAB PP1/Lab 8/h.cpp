#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;
    int cnt = 0;

    for(int i = 0; i < v.size(); i++){
        if(v[k] > v[i]){
            continue;
        }
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < k; i++){
        cout << v[i] << " ";
    }

    


    return 0;
}