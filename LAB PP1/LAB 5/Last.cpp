#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;
    char c = 35;

    for(int i = 0; i < s.size(); i++){
        if(int(c) < s[i]){
            c = s[i];
        }
    }
    cout << c;
    return 0;
}