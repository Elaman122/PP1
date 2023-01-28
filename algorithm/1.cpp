#include <iostream>

using namespace std;

struct Student {     
    string id;  
    string name;     
    int age;
    float gpa;
};

int main(){
    Student s;
    s.id = "22BD";
    s.name = "Elak";
    s.age = 17;
    s.gpa = 3.8;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa;

    return 0;
}