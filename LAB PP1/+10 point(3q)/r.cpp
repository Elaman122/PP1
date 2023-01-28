#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    char t;
    cin >> t;
    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 0; i < s.size(); i++){
        if(char(s[i]) == t){
            if(i > max){
                max = i;
            }
            if(i < min){
                min = i;
            }
        }
    }

    if(max == min){
        cout << min;
    }else
    cout << min << " " << max;

    return 0;
}