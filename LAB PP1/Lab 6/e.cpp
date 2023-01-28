#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double Gipo(int a, int b, float d){
    d = sqrt(pow(a, 2) + pow(b, 2));
    return d;
}

int main(){

    int a, b, d;
    cin >> a >> b;

    cout << setprecision(4) << Gipo(a, b, d);

    return 0;
}