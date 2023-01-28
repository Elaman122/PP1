#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector <int> v1;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v1.push_back(x);
    }

    int m; cin >> m;
    vector <int> v2;

    for(int i = 0; i < m; i++){
        int y;
        cin >> y;
        v2.push_back(y);
    }

    vector <int> v3;

    for(int i = 0; i < n; i++){
        v3.push_back(v1[i]);
    }

    for(int i = 0; i < m; i++){
        v3.push_back(v2[i]);
    }

    sort(v3.begin(), v3.end());

    for(int i = 0; i < v3.size(); i++){
        cout << v3[i] << " ";
    }
    
    

    return 0;
}