#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){

    int n; cin >> n;

    map <string, int> allq;
    map <string, int> :: iterator it;

    for(int i = 0; i < n; i++){
        string s;
        int x;
        cin >> s >> x;
        allq[s] = x;
    }

    for(it = allq.begin(); it != allq.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}