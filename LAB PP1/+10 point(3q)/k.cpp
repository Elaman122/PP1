#include <iostream>
#include <cmath>

using namespace std;

void toBi(string s){
    int sum = 0;
    int k = s.size() - 1;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            sum += pow(2, k);
        }
        k--;
    }

    cout << sum;
}

int main(){
    string s;
    cin >> s;
    toBi(s);
    
    return 0;
}