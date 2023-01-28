#include <iostream>

using namespace std;

int Sumof(string s, int sum, int i = 0){
    if(s.size() == i){
        return sum;
    }
    if(s[i] > 47 and s[i] < 58){
        sum += s[i] - '0';
    }
    return Sumof(s, sum, ++i);
}

int main(){
    string s;
    cin >> s;

    cout << Sumof(s, 0, 0);

    return 0;
}