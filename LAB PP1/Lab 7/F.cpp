#include <iostream>

using namespace std;
int cnt = 0;
int Negr(string s, int i = 0){
    
    if(s.size() == i){
        return cnt;
    }
    if((s[i] - '0') % 2 == 0){
        cnt++;
    }
    return Negr(s, ++i);
}

int main(){
    
    string s;
    cin >> s;

    cout << Negr(s);

    /* int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if((s[i] - '0') % 2 == 0){
            cnt++;
        }
    }
    cout << cnt; */

    return 0;
}