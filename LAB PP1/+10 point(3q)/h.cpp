#include <bits/stdc++.h>

using namespace std;

double PriceQuality(int price, int quality){
    double rat=(double)quality/price;
    return rat;
}

int main(){
    int n;
    cin>>n;

    vector <string> a(n);
    vector <int> b(n);
    vector <int> c(n);

    for(int i = 0;i < n; i++){
        cin >> a[i];
        cin >> b[i];
        cin >> c[i];
    }

    vector <double> k(n);
    for(int i = 0; i < n; i++){
        k[i]=PriceQuality(b[i],c[i]);
    }

    double mx = INT_MIN;
    int w1 = 0;
    for(int i = 0; i < n; i++){
        if(k[i] > mx){
            mx = k[i];
            w1 = i;
        }
    }
    cout << a[w1];
}