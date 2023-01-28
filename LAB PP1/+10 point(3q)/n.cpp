#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] > 96 and s[i] < 123 or s[i] > 64 and s[i] < 91){
            cout << s[i];
        }
    }

    return 0;
}