#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if(a > b && b > c)
        cout << a << " " << b << " " << c;
    if(a > b && a > c && b < c)
        cout << a << " " << c << " " << b;
    if(b > a && a > c)
        cout << b << " " << a << " " << c;
    if(b > c && a < c)
        cout << b << " " << c << " " << a;
    if(c > a && a > b)
        cout << c << " " << a << " " << b;
    if(c > b && a < b)
        cout << c << " " << b << " " << a;
    return 0;
}