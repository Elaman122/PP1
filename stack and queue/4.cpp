#include <iostream>
#include <deque> // duble and queue {deque}

using namespace std;

int main() {
    deque <int> d;
    d.push_back(7); // добавляет элемент в конец
    d.push_front(8); // добавляет элемент в начало
    d.push_back(9);  // добавляет элемент в конец (становится последним элементам)
    d.push_front(10); // добавляет элемент в начало (становится первым элементам)

    /*  
        [10] [8] [7] [9]
    */

    cout << d.front() << " " << d.back() << endl;

    // выволит первый и последний элемент [10] and [9]
    
    d.pop_front();  // удаяет первый элемент (удаляет 10)
    d.pop_back();  // удаляет последний элемент (удаляет 9)

    /*
        У нас остается только [8]  and  [7]
    */


    cout << d.front() << " " << d.back(); // выводим первый и послений элемент

    return 0;
}