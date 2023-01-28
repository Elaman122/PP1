#include <iostream>

using namespace std;

int main(){
    long long n;
    
    cin >> n;

    long long k = n;

    

    while(n > 10){
        
        n = n / 10;
    }

    int sum = 0;

    while(k > 0){
        sum += k % 10;
        k = k / 10;
    }

    if((sum - n) % 10 == n){
        cout << "YES";
    }else
    cout << "NO";
    
    
    return 0;
}