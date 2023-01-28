#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    int cnt = 0;

    while (pow(2, cnt) <= n){
        int k = pow(2, cnt);
        cout << k << " ";
        cnt ++;
    }
   
    
    return 0;
}