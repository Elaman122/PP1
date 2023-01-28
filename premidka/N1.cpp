#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 2; i <= n; i++){
        int cnt = 0;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt==0){
            cout << i << endl;
        }
    }


    return 0;
}