#include <iostream>
#include <string>
#include "Headers/Player.h"
using namespace std;

Player::Player(string name, int health) {
    Player::health = health;
    Player::name = name;
}

void Player::sayHey() {
    cout << "Hallo " << name << endl;
}

