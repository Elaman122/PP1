#include <bits/stdc++.h>

using namespace std;

int isPrime(int &it){
    for(int i = 2; i < it; i++){
        if(it % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n,x, cnt; cin >> n;
    vector <int> v;
    vector <int> :: iterator it;


    for(int i = 0; i < n; i++){
        cin >> x;
        v.push_back(x);
    }
    int k; cin >> k;

    for(it = v.begin(); it != v.end(); it++){
        if(*it >= k){
            cnt += isPrime(*it);
        }
    }

    cout << cnt;
    return 0;
}