#include <iostream>

using namespace std;

int cnt = 0;
int Sum_of(string s, int i = 0){
    if(s.size() == i){
        return cnt;
    }
    cnt += s[i] - 48;

    return Sum_of(s, ++i);
}


int main(){

    string s; cin >> s;

    cout << Sum_of(s);

    return 0;
}