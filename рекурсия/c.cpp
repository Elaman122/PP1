#include <iostream>

using namespace std;
int count(string s, int i, int res){
    if(i==s.size()) return res;
    if(s[i] >= 48 and s[i] <= 57) res += 1;
    return count(s,i+1,res);
}

int main(){
    string s;
    cin >> s;
    cout << count(s,0,0);

    return 0;
}