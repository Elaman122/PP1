#include <iostream>

using namespace std;

bool MgG(int n){
    while(n > 0){
        if(n % 10 >= 0){
            if(n % 2 == 1){
                return false;
            }
        }
        n = n / 10;
    } return true;
}

int main(){
    int n, cnt = 0;
    cin >> n;
    if(MgG(n) == true){
        cout << "Valid";
    }else
    cout << "Not valid";

    return 0;
}