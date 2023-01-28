#include <iostream>

using namespace std;
int MgG(int n, int cnt){
    while(n > 0){
        cnt = cnt + n % 10;
        n = n / 10;
    }
    return cnt;
}

int main(){
    int n, cnt = 0;
    cin >> n;

    cout << MgG(n, cnt);
    return 0;
}