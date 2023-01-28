#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt[1001];
    for(int i = 0; i < 1001; i++){
        cnt[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cnt[arr[i]]++;
    }

    int max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(cnt[i] > max){
            max = cnt[i];
        }
        
    }

    for(int i = 1001; i >= 0; i--){
        if(max == cnt[i]){
            cout << i << " ";
        }
    }

    return 0;
}