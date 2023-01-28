#include <iostream>

using namespace std;

struct Student {
    string id;
    string name;
    int age;
    double gpa;
};

int main(){

    Student s;
    cin >> s.id >> s.name >> s.age >> s.gpa;
    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa;


    return 0;
}