#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n; cin >> n;
    vector <string> v, t;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }

    
    

   for(int i = 0; i < v.size(); i++){
        if(v[i].find("@gmail.com") >= 0 and v[i].find("@gmail.com") <= v[i].size()){
            int ras = v[i].size()-10;
            cout << v[i].erase(ras) << endl;
        }
   }

    


    return 0;
}