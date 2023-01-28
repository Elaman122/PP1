#include <iostream>
#include <stack>



using namespace std;

int main(){
    stack <int> st;
    st.push(4);
    st.push(17);
    
    
    

    cout << st.top() << endl;

    st.pop();

    cout << st.top() << endl;

    st.pop();

    cout << st.empty();

    return 0;
}