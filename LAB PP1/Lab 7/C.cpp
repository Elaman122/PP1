#include <iostream>

using namespace std;

bool find(int n, int arr[], int k, int i = 0){
    if(n == i){
        return false;
    }
    if(arr[i] == k){
        return true;
    }
    return find(n, arr, k, ++i);
}

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int k;
    cin >> k;

    if(find(n, arr, k) == true){
        cout << "Yes";
    }else
    cout << "No";

    
    return 0;
}