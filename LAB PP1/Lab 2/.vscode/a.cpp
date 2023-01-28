#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cnt = cnt + pow(i, 2);
    }

    cout << cnt << endl;
    return 0;
}