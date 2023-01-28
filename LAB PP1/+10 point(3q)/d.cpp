#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char a[16];

void vivod(int n, int m){
    vector <char> arr;
    while(n > 0){
        arr.push_back(a[n % m]);
        n /= m;
    }
    reverse(arr.begin(), arr.end());
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i];
    }
}

int main(){
    int n, m = 16;
    cin >> n;
    for(int i = '0'; i <= '9'; i++){
        a[i - '0'] = i;
    }
    for(int i = 10; i <= 16; i++){
        a[i] = i + 55;
    }
    vivod(n, m);
}