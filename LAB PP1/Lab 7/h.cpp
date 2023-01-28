#include <iostream>

using namespace std;

void Fib(int n, int fib0, int fib1, int fib2, int cnt){
    if(n == 1){
        cout << "0";
    }
    else if(n == 2){
        cout << "1";
    }
    else if(n != cnt){
        fib0 = fib1;
        fib1 = fib2;
        fib2 = fib1 + fib0;
        Fib(n, fib0, fib1, fib2, cnt + 1);
    }else{
        cout << fib2;
    }
    
}

int main(){
    int n, fib0 = 0, fib1 = 1, fib2 = 1, cnt = 3;
    cin >> n;

    Fib(n, fib0, fib1, fib2, cnt);

    return 0;
}