#include <iostream>

using namespace std;

int main(){ 
    string s;
    cin >> s;
    int cnt = 0, cnt1 = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] > 64 && s[i] < 91){
            cnt++;
        }if(s[i] > 96 && s[i] < 123){
            cnt1++;
        }
    }

    cout << cnt1 << " " << cnt;
    return 0;
}