#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int i = min(s.size(), t.size());
    int cnt = i;

    while(s.substr(s.size() - i, i) != t.substr(0, i)){
        i--;
        cnt = i;
    }

    while(cnt--){
        t.erase(0, 1);
    }

    cout << s+t;

    return 0;
}