#include <iostream>

using namespace std;

int main(){
    char s;
    string t;
    cin >> s >> t;

    for(int i = 0; i < t.size(); i++){
        if(s != char(t[i])){
            cout << t[i];
        }
    }


    return 0;
}