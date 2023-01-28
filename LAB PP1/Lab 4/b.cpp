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

    long long max = -999999999999, predmax = -999999999999;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] > predmax && arr[i][j] < max){
                predmax = arr[i][j];
            }
            
        }
            
        }
        if(predmax > 0){
            cout << predmax;
            return 0;
        }else
        cout << "0";
        
    return 0;
}