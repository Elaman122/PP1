#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    long long m;
    cin >> n >> m;

    int sum = 0;

    if(n == m){
        cout << "YES 0";
        return 0;
    }

    if(n < m){
        for(int i = 0; i <= 60; i++){
            if(n * pow(2, i) == m){
                sum = i;
            }
        }
    }else if(n > m){
        for(int i = 0; i <= 60; i++){
            if(n / pow(2, i) == m){
                sum = -i;
            }
        }
    }
    if(sum > 0){
        cout << "YES " << sum;
        return 0;
    }
    if(sum < 0){
        cout << "YES " << sum;
        return 0;
    }

    cout << "NO";

    
    return 0;
}