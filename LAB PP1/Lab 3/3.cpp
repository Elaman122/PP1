#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int max = -999999999;

    int long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }

    }
    cout << max << " ";
    return 0;
}