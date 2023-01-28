#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int stolb = 0, colona = 0, sum = 0;
    cout << "coordinates of min elements:";
    for(int j = 0; j < m; j++){
        int min = 99999999;
        for(int i = 0; i < n; i++){
            if(arr[i][j] < min){
                min = arr[i][j];
                stolb = i;
                colona = j;
            }
        }
        cout << endl << stolb + 1 << ";" << colona + 1;
        sum += min;
        
    }
    cout << endl << endl << "Their sum : " << sum;

    return 0;
}