#include <iostream>

using namespace std;

bool IslaM(string s, int n, int cnt){
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 47 and s[i] < 58){
            cnt++;
        }
        if(n <= cnt){
            return true;
        }
    }
    return false;
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int cnt = 0;
    
    if(IslaM(s, n, cnt) == true){
        cout << "YES";
    }else
    cout << "NO";

    return 0;
}