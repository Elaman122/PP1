#include <iostream>

using namespace std;

int main() {

    int n, k, m;

    cin >> n >> k;

    int w1 = k / 100;
    int w2 = k % 10;

    m = w1 + w2;

    cout << n + m << endl;


    return 0;
}