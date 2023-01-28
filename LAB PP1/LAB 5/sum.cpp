#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    
    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++){
        if(n % 2 == 0){
            cout << i << " ";
        }
    }
    
    return 0;
}