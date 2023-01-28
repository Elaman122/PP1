#include <iostream>

using namespace std;

bool Negr(int n, int p = 1){
    if(n == p) return true;
    if(p > n) return false;
    return Negr(n, 2 * p);
}

int main(){
    int n;
    cin >> n;
    if(Negr(n) == true){
        cout << "Yes";
    }else
    cout << "No";

    return 0;
}