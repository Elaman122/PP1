#include <iostream>

using namespace std;

int main(){
    long n;
    cin >> n;
    int cnt = 0;

    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            cnt++;
        }
    } if(cnt == 2){
        cout << "Yes";
    }else
    cout << "No";


    return 0;
}