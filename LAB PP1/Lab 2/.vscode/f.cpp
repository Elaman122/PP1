#include <iostream>
#include <cmath>

using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 2; i < sqrt(n); i++){
        if(n % 2 == 0){
            cout << i;
            return 0;
        }
    }

    cout << n;
    return 0;
}