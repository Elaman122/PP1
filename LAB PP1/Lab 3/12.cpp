#include <iostream>

using namespace std;

int main(){

    int n, l, r;
    cin >> n >> l >> r;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = l - 1; i < r; i++){
        
        sum += arr[i];
    }
    cout << sum;

    return 0;
}