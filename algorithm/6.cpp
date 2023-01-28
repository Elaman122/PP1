#include <iostream>
#include <vector>

using namespace std;

struct Student
{
    string name;
    int age;
    string phone;


    void read () {
        cin >> name >> age >> phone;
    }

    void show () {
        cout << name << " " << age << " " << phone << " " << endl;
    }

};


int main(){
    int n;
    cin >> n;

    vector <Student> v;

    for(int i = 0; i < n; i++){
        Student s;
        s.read();
        v.push_back(s);
    }

    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }
    

    return 0;
}