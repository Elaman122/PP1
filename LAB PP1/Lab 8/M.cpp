#include <bits/stdc++.h>


using namespace std;

int main(){

    int n; cin >> n;
    set <int> s;
    set <int> :: iterator it;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        s.insert(x);
    }

    int sum = 0;
    for(it = s.begin(); it != s.end(); it++){
        sum += *it;
    }

    cout << sum;
   
    return 0;
}