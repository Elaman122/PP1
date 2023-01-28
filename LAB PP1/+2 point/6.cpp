#include <iostream>

using namespace std;

int main(){
    int x1, y1, x2, y2, a, b;
    cin >> x1 >> y1 >> x2 >> y2 >> a >> b;
    if(x1 + x2 > a && y1 + y2 > b){
        cout << "yes";
    }else 
    cout << "no";

    return 0;
}