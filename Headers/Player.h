//
// Created by asame on 28.01.2019.
//

#ifndef CPP_GAME_PLAYER_H
#define CPP_GAME_PLAYER_H

#include <xstring>

using namespace std;

class Player {
private:
    string name;
    int health;
public:
    Player(string name, int health);
    string getName() { return name; }

    void sayHey();

};

#endif //CPP_GAME_PLAYER_H
