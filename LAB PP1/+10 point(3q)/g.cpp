#include <bits/stdc++.h>


using namespace std;

int main(){
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    vector <char> a(n);
    vector <int> b(n);

    for(int i = 0; i < n; i++){
        b[i] = 0;
    }

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < n; j++){
            if(s[i] == a[j]){
                b[j]++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " - " << b[i] << endl;
    }
    

    return 0;
}