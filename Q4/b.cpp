#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    vector <int> v;

    while(cin >> n){
        v.push_back(n);
        if(n == 0){
            break;
        }
    }


    return 0;
}