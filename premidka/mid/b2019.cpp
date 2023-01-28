#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n][m];
    int a[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ;j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(arr[i][j] == k){
                cnt++;
                break;
            }
        }
        a[i] = cnt;
    }
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum;
    return 0;
}