#include<iostream>
using namespace std;
class Player {
    public:
    int health;
    int score;
    string name;

    void showHealth() {
        cout << "health is: " << health << endl;
    }

    void showScore() {
        cout << "score is: " << score << endl;
    }

    // setter
    void setHelath(int h) {
        health = h;
    }
    void setScore(int s) {
        score = s;
    }
};

class Student {
    public:
    char name[10];
    int rollno;
    char address[50];
};

class Calculator {
    public:
    int a;
    int b;

    void add() {
        cout << "additon is: " << a + b << endl;
    }

    void subtract() {
        cout << "subtraction is: " << a - b << endl;
    }

    void multiply() {
        cout << "multiply is: " <<  a * b << endl;
    }
};
int main() {
    Player jin;
    jin.score = 90;
    jin.health = 100;
    jin.name = "jin kazama";
    cout << jin.name << endl;
    cout << jin.score << endl;
    cout << jin.health << endl;
    // int sizeofClass = sizeof(jin);
    // cout << sizeofClass << endl;

    // Player paul;
    // paul.health = 80;
    // paul.score = 70;
    // paul.name = "paul finex";
    jin.showHealth();
    jin.showScore();


    Calculator calci;
    calci.a = 2;
    calci.b = 5;
    calci.multiply();
    calci.add();

    jin.setScore(50);
    jin.showScore();
    jin.setHelath(78);
    jin.showHealth();
    return 0;
}