#include <iostream>
using namespace std;

string truth(string s){
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 48 && s[i] <= 57){
            return "";
        }
    }
    return s;
}

int main(){
    string s;
    getline(cin, s);


    string a="";
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == ' ' || i == s.length()){
            string output = truth(a);
            a = "";
            if(output != ""){
                cout << output << endl;
            }
        }else{
            a+=s[i];
        }
    }

    return 0;
}