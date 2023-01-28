#include <iostream>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    for(int i = 2; i <= n; i++){
        cnt = 0;
        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                cnt = 1;
                break;
            }
        }
        if(cnt == 0){
            cout << i << " is prime" << endl;
        }
    }

    return 0;
}