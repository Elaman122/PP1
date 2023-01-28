#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int even = 0;
    int odd = 0;

    for(int i = 0; i < n; i++){
        int k;
        cin >> k;

        if(k % 2 == 0)
        even = even + 1;

        if(k % 2 == 1)
        odd = odd + 1;
    }

    cout << even << " " << odd;
    return 0;
}