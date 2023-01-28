#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue <int> q;
    q.push(2);
    q.push(4);

    cout << q.size() << "  " << q.empty() << endl;

    cout << q.back() << endl; // выводит последний элемент

    cout << q.front() << endl; // front как top для стэйка, но как queue выводит первый элемент 

    q.pop();

    cout << q.front() << endl;

    q.pop();

    cout << q.size() << "  " << q.empty();


    
    


    return 0;
}