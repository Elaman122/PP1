#include <iostream>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << i << " ";
            cnt++;
            if(cnt == n){
                return 0;
            }
        }
    }

    return 0;
}