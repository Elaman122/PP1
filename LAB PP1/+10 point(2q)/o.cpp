#include <iostream>

using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int arr[n][m];
    int arr2[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m ; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m; j++){
            sum += arr[i][j];
        }
        arr2[i] = sum / m;
    }

    for(int i = 0; i < n; i++){
        cout << arr2[i] << " ";
    }

    return 0;
}