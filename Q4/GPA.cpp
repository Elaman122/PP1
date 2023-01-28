#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double toScore(){
    
}

int main() {
    int n;
    cin >> n;

    vector <pair <pair <string, string>, double > > v;

    while(n--){
        string firstname;
        string secondname;
        int x;
        cin >> firstname >> secondname >> x;
        double score = 0;
        int allcredits;
        while(x--){
            string mark;
            int credit;
            score += toScore();
            allcredits += credit;
            
        }
        double res = score / allcredits;
        v.push_back({{secondname, firstname}, res});
    }


    return 0;
}