#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    int cnt = 0;

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

    cout << cnt;
    

    return 0;
}