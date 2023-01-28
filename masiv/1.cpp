#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n][n];
    char cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i+j == n-1){
                arr[i][j] = ++cnt;
            }else {
                arr[i][j] = '.';
            }
        }
    }

   

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}