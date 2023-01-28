#include <iostream>

using namespace std;

int main(){
    int n, cnt;
    cin >> n;
    while(n > 0){
        if(cnt % 7 != 0){
            if(cnt % 2 == 0){
                n = n - 4;
            }else {
                n = n + 3;
            }
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}