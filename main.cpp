#include <iostream>
#include "Headers/Player.h"

using namespace std;

int main() {
    Player* p = new Player("Oktay", 20);
    p->sayHey();
    return 0;
}