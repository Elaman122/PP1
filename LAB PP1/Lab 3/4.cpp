#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int pos = 0, max = -999999999;

    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            pos = i;
            }
    }
    
    cout << pos + 1 <<  " ";
    return 0;
}