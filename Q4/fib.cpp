#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[1001];
    arr[0] = 1, arr[1] = 1;

    for(int i = 2; i < 1001; i++){
        arr[i] = arr[i-1] + arr[i-2];
        if(arr[i] == n){
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}