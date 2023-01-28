#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int w1 = n / 1000;
    int w2 = n / 100 % 10;
    int w3 = n / 10 % 10;
    int w4 = n % 10;
    if(w1 == w4 && w2 == w3){
        cout << "Yes";
    }else
    cout << "No";

    return 0;
}