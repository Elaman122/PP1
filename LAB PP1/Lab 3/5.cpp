#include <iostream>

using namespace std;

int main() {

    int n, cnt = 0;
    cin >> n;

    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cnt = cnt + arr[i];
    }
    

    cout << cnt << endl;
    
   return 0;
}