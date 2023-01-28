#include <iostream>
#include <queue>

using namespace std;

int main(){
    string s;
    int x;
    queue <int> q;

    while(cin >> s){
        if(s == "push"){
            cin >> x;
            q.push(x);
            cout << "ok" << endl;
        }else
        if(s == "pop"){
            cout << q.front() << endl;
            q.pop();
        }else
        if(s == "front"){
            cout << q.front() << endl;
        }else
        if(s == "size"){
            cout << q.size() << endl;
        }else
        if(s == "clear"){
            while(!q.empty()){
                q.pop();
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