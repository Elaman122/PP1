#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt = 1;
    int sum=0;
    char b;

    (s.begin(), s.end());
    if(s.size() == 1){
        cout << s[0] << " " << 1;
    }
    else{
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            cnt++;
        }
        if(cnt > sum){
            sum = cnt;
            b = s[i-1];
        }
        if(s[i] != s[i-1])
            cnt=1;
    }

    cout << b << " " << sum;
    }
    return 0;
        
}