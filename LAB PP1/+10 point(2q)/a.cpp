#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            cnt1++;
        }else
        cnt2++;
    }
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % 2 == 0){
            sum1 += arr[i];
        }else
        sum2 += arr[i];
    }

    cout << "Left hand magic power: " << cnt1 * sum1 << endl;

    cout << "Right hand magic power: " << cnt2 * sum2 << endl;
    

    return 0;
}