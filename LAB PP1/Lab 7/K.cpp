#include <iostream>

using namespace std;

int dake = -999999999;
int Maxi(string s, int i = 0){
    if(s.size() == i){
        return dake;
    }
    if(s[i] - 48 > dake){
        dake = s[i] - 48;
    }

    return Maxi(s, ++i);
   
    
}

int main(){
    string s; cin >> s;
    cout << Maxi(s);

    return 0;
}