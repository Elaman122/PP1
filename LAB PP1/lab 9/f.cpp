#include <iostream>
#include <stack>

using namespace std;

int main(){
   
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            st.push(s[i]);
        } else {
            if(st.empty()){
                cout << "NO\n";
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
    
    

    return 0;
}