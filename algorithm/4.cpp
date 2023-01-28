#include <iostream>

using namespace std;

struct K5 {
    string name;
    int age;
    string bestfrined;
}
;

int main(){
    int n;
    cin >> n;

    K5 k[n];

    for(int i = 0; i < n; i++){
        cin >> k[i].name >> k[i].age >> k[i].bestfrined;
    }

    for(int i = 0; i < n; i++){
        cout << k[i].name << " " << k[i].age << " " << k[i].bestfrined << endl;
    }
    

    return 0;
}