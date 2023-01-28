#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    if(k==1){
        for(int i = n; i <= m; i++){
            if(ceil(sqrt(i)) == floor(sqrt(i))){
                cout << i << " ";
            }
        }
    }else if(k==-1){
        for(int i = m; i >= n; i--){
            if(ceil(sqrt(i)) == floor(sqrt(i))){
                cout << i << " ";
            }
        }
    }


    return 0;
}