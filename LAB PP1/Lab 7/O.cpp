#include <iostream>

using namespace std;

char arr[36];
void vv(int n, int k){
    if(n < k){
        cout << arr[n];
        return;
    }
    vv(n/k,k);
    cout << arr[n % k];
    
}

int main(){
    for(int i = 48; i < 58; i++){
        arr[i - 48] = i;
    }

    for(int i = 10; i < 36; i++){
        arr[i] = i + 55;
    }
    int n,k;
    cin >> n >> k;
    vv(n,k);

    return 0;
}