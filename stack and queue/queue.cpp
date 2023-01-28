#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;

    stack <char> st;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '0' or st.empty()){
            st.push(s[i]);
        }else if(s[i] == '1'){
            if(st.top() == '1'){
                st.pop();
            }else {
                st.push(s[i]);
            }
        }
    }

    string t;

    while(!st.empty()){
        t = st.top() + t;
        st.pop();
    }

    cout << t;


    return 0;
}