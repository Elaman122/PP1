#include <iostream>

using namespace std;

int main(){
    int n, sum, babki = 500000, cnt = 0;
    cin >> n;
    while(babki > 0){
        sum = n / 100 * 30;
        babki = babki - sum;
        n = n * 1.1;
        cnt++;
    }
    cout << cnt;
    return 0;
}