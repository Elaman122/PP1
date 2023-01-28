#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    long long max = -9999999999;
    int stolb = 0, colona = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                stolb = i;
                colona = j;
            }
        }
    }
    cout << stolb + 1 << " " << colona + 1;
    return 0;
}