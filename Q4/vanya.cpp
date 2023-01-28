#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isPrime(int n){
    if(n == 1 or n == 0){
        return false;
    }else {
        for(int i = 2; i < sqrt(n); i++){
            if(n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector <int> v1;
    

    return 0;
}