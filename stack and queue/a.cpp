#include <iostream>
#include <stack>

using namespace std;

int main(){
    string s;
    int x;
    stack <int> st;

    while(cin >> s){
        if(s == "push"){
            cin >> x;
            st.push(x);
            cout << "ok" << endl;
        }else
        if(s == "pop"){
            cout << st.top() << endl;
            st.pop();
        }else
        if(s == "back"){
            cout << st.top() << endl;
        }else
        if(s == "size"){
            cout << st.size() << endl;
        }else
        if(s == "clear"){
            while(!st.empty()){
                st.pop();
            }
            cout << "ok" << endl;
        }else
        if(s == "exit"){
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}