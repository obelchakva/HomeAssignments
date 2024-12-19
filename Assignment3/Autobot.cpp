/* Obelchak Vyacheslav st129564@student.spbu.ru
   Home assignment #3
*/
#include "Autobot.h"

Autobot::Autobot(const std::string& name, int powerLevel, int speed, const Weapon& weapon, bool canFly, std::shared_ptr<Alliance> alliance)
    : Transformer(name, powerLevel, speed, weapon, alliance), canFly_(canFly) {}

bool Autobot::getCanFly() const {
    return canFly_;
}

void Autobot::setCanFly(bool canFly) {
    canFly_ = canFly;
}

std::string Autobot::attack() const {
    return Transformer::attack() + " (Autobot)";
}
