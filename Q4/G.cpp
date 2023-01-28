#include <iostream>
#include <stack>

using namespace std;

int main() {
    int n;
    cin >> n;

    stack <int> st;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(st.empty()){
            st.push(x);
        }else {
            if(st.top() < x){
                st.pop();
            }else
                st.push(x);
        }
    }   

    cout << st.size() << endl;

    return 0;
}