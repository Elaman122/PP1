#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int cnt[10000];
    for(int i = 0; i < 10000; i++){
        cnt[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cnt[arr[i]]++;
    }

    int max = -999999999;

    for(int i = 0; i < 10000; i++){
        if(cnt[i] > max){
            max = cnt[i];
        }
        
    }

    for(int i = 10000; i >= 0; i--){
        if(max == cnt[i]){
            cout << i << " ";
        }
    }

    return 0;
}