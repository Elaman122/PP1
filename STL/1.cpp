#include <iostream>
#include <vector>
// #include <bits/stdc++.h>

using namespace std;

int main(){

    vector <int> v;

    int x;
    while(cin >> x){
        if(x==0){
            break;
        }else
        v.push_back(x);
    }

    for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";

    }


    return 0;
}