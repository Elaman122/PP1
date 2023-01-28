#include <bits/stdc++.h>
using namespace std;



void RES(){
queue<string> q;
int n;
cin >> n;

for(int i = 0; i < n; i++){
    int x;
    cin >> x;

    if(x == 2) 
        q.pop();
    else{
        string s;
        cin >> s;
        q.push(s);
    }

    if(!q.empty()) 
        cout << q.front() << "\n";
    else 
        cout << "queue is empty\n";
}
}


int main(){

    RES();
    
    return 0;
}