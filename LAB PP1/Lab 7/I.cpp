#include <iostream>

using namespace std;

int Infi(){
    int x;
    cin >> x;
    if(x == 0){
        return 0;
    }
    return Infi() + x;
}

int main(){
    cout << Infi();

    return 0;
}