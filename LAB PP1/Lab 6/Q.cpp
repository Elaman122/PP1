#include <iostream>

using namespace std;

double Habib(float n, float m){
    return ((m*100) / n);
}

int main(){
    int n, m;
    cin >> n >> m;

    cout << Habib(n, m);

    return 0;
}