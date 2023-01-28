#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n;
    cin >> n;
    deque <int> d1;
    deque <int> d2;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        d1.push_front(x);
    }

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        d2.push_back(x);
    }

    while(!d1.empty()){
        cout << d1.front() << " ";
        d1.pop_front();
    }

    cout << endl;

    while(!d2.empty()){
        cout << d2.back() << " ";
        d2.pop_back();
    }

    return 0;
}