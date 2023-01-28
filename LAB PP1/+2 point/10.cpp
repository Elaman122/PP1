#include <iostream>

using namespace std;

int main(){
    int a, b, c, costa, costb, costc, coss;
    cin >> a >> b >> c >> costa >> costb >> costc >> coss;
    if(a * costa + b * costb + c * costc <= coss){
        cout << "Yes";
    }else
    cout << "No";

    return 0;
}