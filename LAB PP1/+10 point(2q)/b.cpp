#include <iostream>

using namespace std;

int main(){
    int w, h;
    cin >> w >> h;
    int arr[h][w];
    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            arr[i][j] = 1;
        }
    }
    int n, x1, y1, x2, y2; cin >> n;

    for(int k = 0; k < n; k++){
        cin >> x1 >> y1 >> x2 >> y2;
        for(int i = x1; i < x2; i++){
            for(int j = y1; j < y2; j++){
                arr[i][j] = 0;
            }
        }
    }
    int sum = 0;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            sum += arr[i][j];
        }
    }

    cout << sum;


    return 0;
}