#include <bits/stdc++.h>

using namespace std;
int arr[11];

int main() {
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        arr[n]++;
    }

    for(int i = 1; i < 11; i++){
        cout << arr[i] << " ";
    }

    return 0;
}