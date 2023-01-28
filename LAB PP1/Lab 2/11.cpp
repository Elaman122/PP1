#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int n;
    cin >> n;
    int cnt = 1;

    while (pow(cnt, 2) <= n){
        cout << pow(cnt, 2) << endl;
        cnt++;
    }


    return 0;
}