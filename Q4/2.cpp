#include <iostream>
#include <set>

using namespace std;

bool isCor(int n){
    int cnt = 0;
    set <int> s;
    while(n > 0){
        s.insert(n % 10);
        cnt++;
        n /= 10;
    }
    if(s.size() == cnt){
        return true;
    }
    return false;
}

int main() {
    int l, r;
    cin >> l >> r;

    int ans;
    bool res;

    for(int i = l; i <= r; i++){
        if(isCor(i) == true){
            ans = i;
            res = true;
            break;
        }else
            res = false;
    }

    if(res == true){
        cout << ans << endl;
    }else
        cout << "Understandable, have a great day \n";



    return 0;
}