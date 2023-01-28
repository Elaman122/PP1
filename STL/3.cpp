#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// sort vector
// reverse vector
// find in a vector

int main(){

    int n;
    cin >> n;

    vector <int> v;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }
    
    vector <int> w;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        w.push_back(y);
    }
    reverse(w.begin(), w.end());
    

    for(int i = 0; i < n; i++){
        cout << w[i] << " ";
    }

    return 0;
}