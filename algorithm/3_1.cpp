#include <iostream>

using namespace std;

struct OurClass {
    string name;
    int age;
    string edu;
}
;

int main(){
    OurClass q1, q2, q3;
    cin >> q1.name >> q1.age >> q1.edu;
    cin >> q2.name >> q2.age >> q2.edu;
    cin >> q3.name >> q3.age >> q3.edu;

    cout << q1.name << " " << q1.age << " " << q1.edu;
    cout << endl;
    cout << q2.name << " " << q2.age << " " << q2.edu;
    cout << endl;
    cout << q3.name << " " << q3.age << " " << q3.edu;

    return 0;
}