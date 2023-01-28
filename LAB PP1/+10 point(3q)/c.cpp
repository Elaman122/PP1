#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b){
    int k = a % b;
    if(k == 0){
        return b;
    }
    return GCD(b, k);   
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int chek = GCD(arr[i], arr[j]);
            if(chek > max){
                max = chek;
            }
        }
    }
    cout << max << endl;
    return 0;
}