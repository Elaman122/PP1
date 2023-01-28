#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n][m];
    int arr2[n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(arr[i][j] == k){
                cnt++;
                break;
            }
        }
        arr2[i] = cnt;
    }


    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr2[i];
    }

    cout << sum;

    return 0;
}