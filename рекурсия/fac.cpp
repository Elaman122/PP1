#include <iostream>

using namespace std;

int sum(int k){
    if(k <= 1){
        return 1;
    }else
    return k * sum(k - 1);
}

int main(){

    int k;
    cin >> k;
    cout << sum(k);
    
    return 0;
}