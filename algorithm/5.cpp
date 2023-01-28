#include <iostream>

using namespace std;

struct Student {
    string id;
    string name;
    int age;
    float gpa;

    void show() {
        cout << id << " " << name << " " << age << " " << gpa << endl;   // можно создать внутри струтуры функцию, которое будет выводит элементы
    }                                                            // чтобы каждый раз не писать (cout << s[i].id << s[i].name << s[i].age)
}
;

int main(){
    int n;
    cin >> n;

    Student s[n];

    for(int i = 0; i < n; i++){
        cin >> s[i].id >> s[i].name >> s[i].age >> s[i].gpa;
    }

    for(int i = 0; i < n; i++){
        s[i].show();      //     чтобы каждый раз не писать большой цикл
    }


    return 0;
}