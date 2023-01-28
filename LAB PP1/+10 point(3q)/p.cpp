#include <iostream>

using namespace std;

string strToBool(string str){
    if(str == "1"){
        return "true";
    }
    else if(str == "0"){
        return "false";
    }else {
        return "ok";
    }
}

int main(){
    string str;
    cin >> str;

    if(strToBool(str) == "ok"){
        for(int i = 0; i < str.size(); i++){
            cout << str[i];
        }
    }else if(strToBool(str) == "true"){
        cout << "true";
    }else
    cout << "false";
    

    return 0;
}