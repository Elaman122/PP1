#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n][m];
    int a[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            arr[i][j] = cnt;
        }
        a[i] = cnt;
    }int cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == k){
            cnt1++;
        }
    }

    cout << cnt1;
    return 0;
}