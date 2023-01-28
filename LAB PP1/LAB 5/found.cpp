#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    
    string line = "hello my kbtu name kbtu is kbtu";
    string target = "kbtu";
    
    int cnt = 0;
    int found = line.find(target);
    while(found != string::npos){
        cnt++;
        found = line.find(target, found + target.size());
    }

    cout << cnt << endl;
    



    return 0;
}