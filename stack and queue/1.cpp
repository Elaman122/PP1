#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> st;
    st.push(1);
    st.push(2);

    cout << st.size() << endl; // размер

    cout << st.empty() << endl; // bool function если стэк пустой выводит 1 если не пустой выводит 0

    cout << st.top() << endl; // выводит последний элемент (потому в стеке последний элемент это первый)

    st.pop(); // удаляеть элемент (2 ку удалил)

    cout << st.top() << endl;

    st.pop(); // удалил 1, теперь стэк пустой

    cout << st.empty();

    return 0;
}