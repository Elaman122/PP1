#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n == 1){
        cout << "0";
        
    }
    else if(n % 2 == 1){
        cout << n << endl;
    }
    else
    cout << n / 2 << endl;

    return 0;
}