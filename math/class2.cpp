#include<iostream>
using namespace std;
class Player {
private:
    int health;
    int age;
    int score;
    bool alive;

public:
    int getHealth() {
        return health;
    }
    
    int getAge() {
        return age;
    }

    int getScore() {
        return score;
    }

    int isAlive() {
        return alive;
    }

    // setters
    void setHealth(int health) {
        this -> health = health;
    }

    void setAge(int age) {
        this -> age = age;
    }

    void setScore(int score) {
        this -> score = score;
    }

    void setIsAslive(bool alive) {
        this -> alive = alive;
    }

};

int addScore(Player a, Player b) {
    return a.getScore() + b.getScore();
}

Player getMaxScorePlayer(Player a, Player b) {
    if(a.getScore() > b.getScore()) {
        return a;
    } else {
        b;
    }
}

int main() {
    Player chirag;
    Player king;

    chirag.setAge(20);
    chirag.setScore(90);
    chirag.setIsAslive(true);
    chirag.setHealth(80);

    king.setAge(22);
    king.setHealth(80);
    king.setScore(50);
    king.setIsAslive(true);

    cout << chirag.getScore() << endl;
    cout << addScore(chirag, king) << endl;
    Player newPlayer = getMaxScorePlayer(chirag, king);
    cout << newPlayer.getScore();
    // start at 40
    return 0;
}