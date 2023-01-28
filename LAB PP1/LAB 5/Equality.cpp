#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string s, s1;
    cin >> s >> s1;
    if(s.size() == s1.size()){
        if(s == s1){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
