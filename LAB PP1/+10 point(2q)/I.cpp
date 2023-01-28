#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n][n];
    int arr2[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        int max = -999999999;
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
        arr2[i] = max;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = arr2[i];
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