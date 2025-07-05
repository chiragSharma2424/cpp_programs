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

// this function can't change the name because it is pass by value
void change(Student *s) {
    s -> name = "chintu2";
}

// this is called pass by reference, now it can change the value of name
void change2(Student &s) {
    s.name = "chintu";
}

int main() {
    // Student s();
    // s.name = "chirag sharma";
    // s.rollno = 24;
    // s.marks = 94.5;
    // cout << s.name << endl;



    // now we are using contructor it is used for declaration with initialization
    // Student s("chirag sharma", 24, 89.7);
    // cout << s.name << endl;
    // change2(s);
    // cout << s.name << endl;



    // here we are creating pointer of student type, datatype
    // in pointers case we have to use arrow operator not dot operator
    Student s("chirag", 24, 89.4);
    Student *ptr = &s;
    cout << ptr -> rollno << endl;
    change(&s);
    cout << ptr -> name << endl;
    return 0;
}