#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    int n;
    cin >> n;
    map <string, int> m;
    map <string, int> :: iterator it;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(m[s] == 0){
            cout << "new user added" << endl;
        }else
        cout << "user already exists" << endl;
        m[s]++;
    }

    

    return 0;
}