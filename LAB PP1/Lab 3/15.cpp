#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i < n; i++){
        cnt = pow(i + 1, 2);
        cnt++;
        
    }
    cout << cnt << " ";
    return 0;
}