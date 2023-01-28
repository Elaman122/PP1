#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int>  v;

    for(int i = 0; i < n; i++){
        string s1,s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int k = stoi(s1) + stoi(s2);
        string s3 = to_string(k);
        reverse(s3.begin(), s3.end());
        int x = stoi(s3);
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }

    return 0;
}