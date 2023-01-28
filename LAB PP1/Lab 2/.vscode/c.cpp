#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i <= n; i++){
        cnt = pow(2, i);
    }
    cout << cnt;
    return 0;
}