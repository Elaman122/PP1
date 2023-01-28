#include <iostream>

using namespace std;

int sum = 0;
int Verni(string s, int i = 0){
    if(s.size() == i){
        return sum;
    }
    sum += (s[i]-48) / 2;
    return Verni(s, ++i);

}

int main(){
    string s; cin >> s;
    cout << Verni(s);

    return 0;
}