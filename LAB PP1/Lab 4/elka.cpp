#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int m = 2*n-1;
    char arr[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if( i < j - n + 1 or i + j < n - 1){
                arr[i][j] = '.';
            }else{
                arr[i][j] = '*';
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}