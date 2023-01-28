#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    int cnt = 0;

    for(int i = 0; i < n; i++){

        int k;
        cin >> k;

       while(k > 0){

        if(k % 10 == 0){
            cnt++;
        } 
        k = k / 10;
       }
    }
    cout << cnt << endl;
    return 0;
}