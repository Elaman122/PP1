#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int cnt = 0;
        while(arr[i] > 0){
            cnt = cnt + arr[i] % 10;
            arr[i] = arr[i] / 10;
        }
        if(cnt % 2 == 0){
            cout << "Sum of digits is even!" << endl;
        }else
        cout << "Sum of digits is odd!" << endl;
    }


    return 0;
}