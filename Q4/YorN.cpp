#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map <int, bool> m;

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            m[v[i] + v[j]] = true;
        }
    }

    int k;
    cin >> k;
    vector<int> q(k);
    for(int i = 0; i < k; i++){
        cin >> q[i];
    }

    for(int i = 0; i < k; i++){
        if(m[q[i]] == true){
            cout << "YES \n";
        }else  
            cout << "NO \n";
    }



    return 0;
}