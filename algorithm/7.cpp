#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Friends
{
    string name;
    int age;
    float gpa;
    string fac;

    void read(){
        cin >> name >> age >> gpa >> fac;
    }

    void show(){
        cout << name << " " << age << " " << gpa << " " << fac << endl;
    }

};

bool comp(Friends f1, Friends f2){
    if(f1.age == f2.age){
        return f1.gpa < f2.gpa;
    }
    return f1.age < f2.age;
}


int main(){
    int n;
    cin >> n;
    vector < Friends > v;

    for(int i = 0; i < n; i++){
        Friends f;
        f.read();
        v.push_back(f);
    }

    cout << endl;

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }

    return 0;
}