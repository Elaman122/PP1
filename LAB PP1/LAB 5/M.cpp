#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char x;
    int n;
    cin >> x >> n;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(int(x) == s[i]){
            cnt++;
        }
        
    }
    if(cnt == n){
        cout << "YES";
    }else
    cout << "NO";

    
    return 0;
}