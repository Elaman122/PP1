#include <iostream>

using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < s.size(); i++){
        cnt1 = cnt1 + char(s[i]);
    }
    for(int i = 0; i < t.size(); i++){
        cnt2 = cnt2 + char(t[i]);
    }
    if(cnt2 % cnt1 == 0){
        cout << "YES";
    }else
    cout << "NO";

    return 0;
}