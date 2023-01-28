#include <iostream>

using namespace std;

int main(){
    int n, a, d, cnt = 0;
    cin >> n >> a >> d;
    for(int i = 0; i < n; i++){
        cnt = cnt + a;
        cout << a << " ";
        a = a + d;
        
    }
    cout << endl;
    cout << "sum: " <<  cnt;
    return 0;
}