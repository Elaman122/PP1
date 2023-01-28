#include <iostream>
using namespace std;

int main(){
    int n, k;
    cin >> n;
    while(n > 0){
        if(k % 7 != 0){
            if(k % 2 == 0){
                n = n - 4;
            }
            else{
                n = n + 3;
            }
        }
        k += 1;
    }
    cout << k;
}