#include <iostream>
#include <unordered_map>
#include <iterator>

using namespace std;

int main(){
    int n; cin >> n;
    unordered_map <string, string> m;
    unordered_map <string, string> :: iterator it;

    for(int i = 0; i < n; i++){
        string s1,s2;
        cin >> s1 >> s2;
        m[s1] = s2;
    }
    
    int k; cin >> k;

    for(int i = 0; i < k; i++){
        string s3, s4;
        cin >> s3 >> s4;
        if(!m.count(s3)){
            cout << "login error" << endl;
        }else if(m[s3] != s4){
            cout << "password error" << endl;
        }else
        cout << "correct password" << endl;
    }
 

    return 0;
}