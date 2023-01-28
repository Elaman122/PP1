#include <iostream>

using namespace std;

bool NiGeR(string s, int n, int cnt){
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] > 47 and s[i] < 58 and (s[i] > s[i+1] or s[i] < s[i+1])){
            cnt++;
            if(cnt == n){
                break;
            }
        }

    }
    if(cnt == n) return true;
    return false;
}

int main(){
    string s;
    cin >> s;
    int n, cnt;
    cin >> n;
    if(NiGeR(s, n, cnt) == true){
        cout << "Valid";
    }else
    cout << "Not valid";

    return 0;
}