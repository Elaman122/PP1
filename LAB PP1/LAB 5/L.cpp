#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    bool res;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] <= s[i+1]){
            res = true;
        }else{
            res = false;
            break;
        }
        
        
    }
    if(res == true){
        cout << "YES";
    }else
    cout << "NO";

    return 0;
}