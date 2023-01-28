#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;

    map <string, string> m;
    map <string, string> :: iterator it;

    for(int i = 0; i < n; i++){
        string s1, s2;
        cin >> s1 >> s2;
        m[s2] = s1;
    }

    string s;
    cin >> s;

    for(it = m.begin(); it != m.end(); it++){
        if(s == it -> first){
            cout << it -> second;
            break;
        }else if(s == it -> second){
            cout << it -> first;
        }
    }


    return 0;
}