#include <iostream>

using namespace std;

void Mak(int arr[], int n, int m){
    for(int i = 0; i < n; i++){
        if(arr[i] == m){
            cout << "Yes";
            return;
        }
    }
    cout << "No";
    return;
}


int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;

    Mak(arr, n, m);

    return 0;
}