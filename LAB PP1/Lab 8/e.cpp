#include <iostream>
#include <vector>
#include <algorithm>

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
    int k, m;
    cin >> k >> m;

    v.erase(v.begin() + k, v.begin() + m + 1);
    
    

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}