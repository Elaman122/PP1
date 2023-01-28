#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int max = arr[0], min = arr[0], pos1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            pos1 = i;
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    arr[pos1] = min;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}