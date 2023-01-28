#include <iostream>

using namespace std;

struct Student {     // создаем структуру
    string id;
    string name;     
    int age;          // создаем тип данных в стуркьуре
    float gpa;
};

int main(){
    Student s;         //   вызываем стурктуру
    s.id = "22BD";     //   даем значение тип данным которые соствниет внутри стурктуры
    s.name = "Elak";
    s.age = 17;
    s.gpa = 3.8;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl; //   выводим стурктуру

    Student w;      //   можно создать таких структур безконечно (это удобно, чтобы не соzдовать очень много перемен)
    w.id = "21BD";  //
    w.name = "KBTU_SHARAGA";
    w.age = 20;
    w.gpa = 99999;

    cout << w.id << " " << w.name << " " << w.age << " " << w.gpa;   //  выводим

    return 0;
}