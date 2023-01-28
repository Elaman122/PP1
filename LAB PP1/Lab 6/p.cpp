#include <iostream>
#include <cmath>

int Posnum(int n){
    return abs(n);
}

using namespace std;

int main(){

    int n;
    cin >> n;
    cout << Posnum(n);

    return 0;
}