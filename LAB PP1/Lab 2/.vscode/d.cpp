#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 0; i <=n; i++){
        cnt = pow(2, i) + cnt;
    }
    cout << cnt << endl;
    return 0;
}