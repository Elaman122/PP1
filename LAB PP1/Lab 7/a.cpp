#include <iostream>

using namespace std;

long long deG(int n){
    if(n == 0){
        return 1;
    }else
    return 2 * deG(n-1);


}

int main(){
    int n;
    cin >> n;

    cout << deG(n);
    return 0;
}