#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <int> st;
    st.push(4);
    st.push(7);

    while(!st.empty()) {          // чтобы вывести элементы стэка (пока стэк не пустой)
        cout << st.top() << " ";  // выводим элемент
        st.pop();                 // удаяем этот элемент, иначе будет бесконечный цикл
    }

    return 0;
}