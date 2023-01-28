#include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> v;
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k; cin >> k;
    int sum = 0;
   

    for(int i = 0; i < v.size(); i++){
        if(v[k] < v[i]){
            continue;;
        }
    }
    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    
    for(int i = 0; i < k; i++){
        sum += v[i];
    }
    
    cout << sum;
    return 0;
}