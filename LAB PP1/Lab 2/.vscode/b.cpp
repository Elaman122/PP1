#include <iostream>

using namespace std;

int main(){
    int n, cnt = 1;
    cin >> n;

    for(int i = 1; i <= n; i++){
        cnt = i * cnt;
    }
    cout << cnt << endl;
    return 0;
}