#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    int max = -999999999, sec = -999999999;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        
    }

    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            cnt++;
        }
    }

    if(cnt >= 2){
        sec = max;
    }else if(cnt == 1){
        for(int i = 0; i < n; i++){
            if(arr[i] > sec and arr[i] < max){
                sec = arr[i];
            }
        }
    }

    

    cout << max * sec;

    return 0;
}