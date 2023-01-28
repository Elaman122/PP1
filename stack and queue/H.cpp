#include <iostream>
#include <map>
#include <iterator>


using namespace std;

int main(){
    int n;
    cin >> n;

    map < string, int > m;

    map < string, int > :: iterator it;

    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        m.insert(make_pair(s, i));
    }

    for(it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }


    return 0;
}