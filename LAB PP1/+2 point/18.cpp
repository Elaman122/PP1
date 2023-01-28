#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 100000 && n > 10000){
        int w1 = n / 10000;
        int w2 = n / 1000 % 10;
        int w3 = n / 100 % 10;
        int w4 = n / 10 % 10;
        int w5 = n % 10;
        cout << (w1 * w2 * w3 * w4 * w5) + (w1 + w2 + w3 + w4 + w5);
        return 0;
    }else if(n < 10000 && n > 1000){
        int q1 = n / 1000;
        int q2 = n / 100 % 10;
        int q3 = n / 10 % 10;
        int q4 = n % 10;
        cout << (q1 * q2 * q3 * q4) + (q1 + q2 + q3 +q4);
        return 0;
    }else if(n < 1000 && n > 100){
        int e1 = n / 100;
        int e2 = n / 10 % 10;
        int e3 = n % 10;
        cout << (e1 * e2 * e3) + (e1 + e2 + +e3);
        return 0;
    }else if(n < 100){
        int r1 = n / 10;
        int r2 = n % 10;
        cout << (r1 * r2) + (r1 + r2);
        return 0;
    }
    else
    cout << n;

    return 0;
}