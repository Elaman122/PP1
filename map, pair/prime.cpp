#include <iostream>

using namespace std;

string isPrime(int n){
    if(n == 1 or n == 0){
        return "NO";
    }
    for(int i = 2; i < n; i++){
        if(n % 2 == 0){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int n;
    cin >> n;
    
   cout << isPrime(n);

    return 0;
}