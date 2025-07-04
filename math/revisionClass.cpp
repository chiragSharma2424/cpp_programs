#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int rollno;
    float marks;

    // this is a keyword, it is a pointer which is poiting to data members of class
    Student(string name, int rollno, float marks) {
        this -> name = name;
        this -> rollno = rollno;
        this -> marks = marks;
    }
};

void change(Student s) {
    s.name = "chintu";
}
int main() {
    // Student s();
    // s.name = "chirag sharma";
    // s.rollno = 24;
    // s.marks = 94.5;
    // cout << s.name << endl;



    // now we are using contructor it is used for declaration with initialization
    Student s("chirag sharma", 24, 89.7);
    cout << s.name << endl;
    return 0;
}