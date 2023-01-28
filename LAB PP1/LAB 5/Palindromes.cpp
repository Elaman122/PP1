#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    string Adil;
    cin >> Adil;
    string Yaslan = Adil;
    reverse(Yaslan.begin(), Yaslan.end());
    if(Adil == Yaslan){
        cout << "YES";
    }else
    cout << "NO";

    return 0;
}


