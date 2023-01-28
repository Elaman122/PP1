#include <iostream>

using namespace std;

struct Student 
{
    string id,name;
    int age, gpa;

    void read () {
        cin >> id >> name >> age >> gpa;     // чтобы каждый раз в цикле не читать
    }

    void show() {
        cout << id << " " << name << " " << age << " " << gpa << endl;
    }


};


int main(){
    int n; cin >> n;
    Student s[n];

    for(int i = 0; i < n; i++){
        s[i].read();
    }

    for(int i = 0; i < n; i++){
        s[i].show();
    }


    return 0;
}