#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int max = -1;
    int sum = 0;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        sum = sum + k;
        if(k > max){
            max = k;
        }
    }

    cout << sum << " " << max;
    return 0;
}