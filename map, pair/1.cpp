#include <iostream>

using namespace std;

int main(){

    pair <int, string> allq;
    int n;
    string s;
    cin >> n >> s;

    allq = make_pair(n, s);

    cout << allq.first << " " << allq.second; 


    return 0;
}