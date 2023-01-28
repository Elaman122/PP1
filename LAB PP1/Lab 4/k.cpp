#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int arr2[n];
    int arr3[m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int sum1 = 0;
        for(int j = 0; j < m; j++){
            sum1 = sum1 + arr[i][j];
        }
        arr2[i] = sum1;
    }
    for(int j = 0; j < m; j++){
        int sum2 = 0;
        for(int i = 0; i < n; i++){
            sum2 = sum2 + arr[i][j];
        }
        arr3[j] = sum2;
    }
    for(int i = 0; i < n; i++){
        cout << "The sum of row number " << i + 1 << " is " << arr2[i] << endl;
    }
    for(int j = 0; j < m; j++){
        cout << "The sum of column number " << j + 1 << " is " << arr3[j] << endl;
    }

    return 0;
}