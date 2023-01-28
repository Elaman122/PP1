#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long cnt = 0;
    for(int i = 0; i <= n; i++){
        cnt = pow(2, i);
        cout << cnt << endl;
    }

    
    return 0;
}