#include <iostream>
using namespace std;
string Delete(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            return "";
        }
    }
    return s;
}
int main(){
    string s;
    getline(cin, s);
    string pustoi="";
    for(int i = 0; i <= s.size(); i++){
        if(s[i] == ' ' || i == s.size()){
            string k = Delete(pustoi);
            pustoi = "";
            if(k != ""){
                cout << k;
                cout << endl;
            }

        }else{
            pustoi= pustoi + s[i];
        }
    }
    return 0;
}