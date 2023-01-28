#include <iostream>

using namespace std;

int main(){
    float x, y, cnt = 1;
    cin >> x >> y;
    while(y > x){
        x = x + 0.1 * x;
        cnt++;
    }

    cout << cnt;
    return 0;
}