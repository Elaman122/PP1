#include <iostream>

using namespace std;

int main(){
    int n, l, r;
    int arr[n];
    cin >> n >> l >> r;
    for(int i = l - 1; i < r; i++){
        cin >> arr[i];
         
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}