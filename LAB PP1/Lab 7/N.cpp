#include <iostream>
#include <algorithm>
using namespace std;


void cheater(int *arr, int n, int k, int cnt, bool flag){
    if(cnt != n - 1){
        if((arr[cnt + 1] - arr[cnt]) <= k){
            flag = false;
            cheater(arr, n, k, cnt + 1, flag);
        }
        else{
            cheater(arr, n, k, cnt + 1, flag);
        }
    }
    else{
        if(flag){
            cout << "no";
        }
        else{
            cout << "cheater";
        }
    }
}



int main(){
    int n, k, cnt = 0;
    cin >> n >> k;
    int arr[n];
    bool flag = true;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    cheater(arr, n, k, cnt, flag);
}