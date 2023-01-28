#include <iostream>
#include <deque>

using namespace std;

int main(){
    string s;
    int x;

    deque <int> d;

    while(cin >> s){
        if(s == "push_front"){
            cin >> x;
            d.push_front(x);
            cout << "ok" << endl;
        }else
        if(s == "push_back"){
            cin >> x;
            d.push_back(x);
            cout << "ok" << endl;
        }else
        if(s == "pop_front"){
            cout << d.front() << endl;
            d.pop_front();
        }else
        if(s == "pop_back"){
            cout << d.back() << endl;
            d.pop_back();
        }else
        if(s == "front"){
            cout << d.front() << endl;
        }else
        if(s == "back"){
            cout << d.back() << endl;
        }else
        if(s == "size"){
            cout << d.size() << endl;
        }else
        if(s == "clear"){
            while(!d.empty()){
                d.pop_front();
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