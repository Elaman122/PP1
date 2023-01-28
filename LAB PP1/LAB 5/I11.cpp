#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string s, t;
    cin >> s >> t;
    
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < s.size(); i++){
        sum1 = sum1 + char(s[i]);
    }
    for(int i = 0; i < t.size(); i++){
        sum2 = sum2 + t[i];
    }

    if(sum1 == sum2){
        cout << "YES";
    }else
    cout << "NO";
    
    return 0;
}
