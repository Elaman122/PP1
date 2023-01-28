#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    if(n % 2 == 0 and n % 5 == 0 or n % 2 == 0 and n % 17 == 0 or n % 2 == 0 and n % 19 == 0 or n % 5 == 0 and n % 17 == 0 or n % 5 == 0 and n % 19 or n % 17 == 0 and n % 19 == 0){
        cout << "Yes";
    }else
    cout << "No";

    return 0;
}