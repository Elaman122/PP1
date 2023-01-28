#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    bool res = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i+1] > s[i]){
            res = false;
        }
    }
    if(res == true){
        cout << "YES";
    }else
    cout << "NO";

    
    return 0;
}