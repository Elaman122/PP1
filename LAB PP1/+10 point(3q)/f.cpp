#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        if(s[i] > 96 and s[i] < 123){
            cout << s[i];
        }
    }

    return 0;
}