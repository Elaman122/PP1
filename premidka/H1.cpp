#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int arr2[n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = 0; j < m ; j++){
            sum = sum + arr[i][j];
        }
        arr2[i] = sum;
    }
        
    int min = 999999999, pos = 0;
    for(int i = 0; i < n; i++){
        if(arr2[i] < min){
            min = arr2[i];
            pos = i;
        }
    }


    cout << min << " " << pos + 1;
    return 0;
}