#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n; cin >> n;

    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    int t; cin >> t;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(a[i] <= t and b[i] >= t){
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}