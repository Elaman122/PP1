#include <bits/stdtr1c++.h>

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

    int pos, num;
    cin >> pos >> num;
    v.push_back(num);
    reverse(v.begin()+pos, v.end());
    reverse(v.begin() + pos + 1, v.end());
    

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }


    return 0;
}