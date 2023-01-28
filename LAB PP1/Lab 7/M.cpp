#include <iostream>

using namespace std;
void Negr(int n, int i = 1){
    if(n == i){
        cout << n;
        return;
    }
    cout << i << " ";
    Negr(n, ++i);
}

int main(){
    int n;
    cin >> n;
    Negr(n);

    return 0;
}