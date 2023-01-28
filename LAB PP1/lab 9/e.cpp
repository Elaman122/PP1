#include <iostream>
#include <map>
#include <iterator>


using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> m;
    map <string, int> :: iterator it;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s]++;
    }

    for(it = m.begin(); it != m.end(); it++){
        if(it->second == 3){
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}