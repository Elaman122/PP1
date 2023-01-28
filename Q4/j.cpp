
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int cnt = 0;

    while(s != t) {
        if(t.size() == cnt){
            cout << "IMPOSSIBLE";
            return 0;
        }else {
            cnt++;
            rotate(s.begin(), s.begin() + cnt, s.end());
        }
    }

    cout << cnt;

    return 0;
}