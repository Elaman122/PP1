#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s, s1, s2;
    cin >> s;
    s2 = s;
    int n = s.size();

    while(n > 0){
        s1 = s;
        reverse(s.begin(), s.end());
        if(s1 != s){
            break;
        }
        s2.pop_back();
        s = s2;
        n--;
    }
    
    cout << n;

    return 0;
    
}